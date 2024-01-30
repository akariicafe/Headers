@class NSString, ICQueryObjC, NSPredicate, NSArray;

@interface ICQuery : NSObject

@property (readonly) ICQueryObjC *queryObjC;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (readonly, copy, nonatomic) NSString *entityName;
@property (readonly, copy, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *tagIdentifiers;

+ (id)queryForAllTaggedNotesAllowsRecentlyDeleted:(BOOL)a0;
+ (id)queryForNotesWithTagIdentifier:(id)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)queryForNotesWithTagIdentifiers:(id)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)queryForNotesWithSystemPaperAllowsRecentlyDeleted:(BOOL)a0;
+ (id)queryForPinnedNotes:(BOOL)a0 allowsRecentlyDeleted:(BOOL)a1;

- (id)replacingTagIdentifier:(id)a0 withNewTagIdentifier:(id)a1;
- (id)removingTagIdentifier:(id)a0;

@end
