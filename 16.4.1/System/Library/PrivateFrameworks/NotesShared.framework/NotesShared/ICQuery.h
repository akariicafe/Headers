@class NSString, ICQueryObjC, NSPredicate;

@interface ICQuery : NSObject

@property (readonly) ICQueryObjC *queryObjC;
@property (readonly, nonatomic) BOOL canBeEdited;
@property (readonly, nonatomic) unsigned long long minimumSupportedVersion;
@property (readonly, copy, nonatomic) NSString *entityName;
@property (readonly, copy, nonatomic) NSPredicate *predicate;

+ (id)queryForSharedNotes:(BOOL)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)queryForSystemPaperNotesAllowsRecentlyDeleted:(BOOL)a0;
+ (id)queryForNotesMatchingFilterSelection:(id)a0;
+ (id)queryForNotesMatchingTagSelection:(id)a0;
+ (id)queryForPinnedNotes:(BOOL)a0 allowsRecentlyDeleted:(BOOL)a1;

- (id)filterSelectionWithManagedObjectContext:(id)a0 account:(id)a1;
- (id)removingTagIdentifier:(id)a0;
- (id)tagSelectionWithManagedObjectContext:(id)a0;
- (id)replacingTagIdentifier:(id)a0 withNewTagIdentifier:(id)a1;

@end
