@class NSString, NSPredicate, NSArray;

@interface ICQueryObjC : NSObject {
    void /* unknown type, empty encoding */ entity;
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, readonly) BOOL canBeEdited;
@property (nonatomic, readonly) NSString *entityName;
@property (nonatomic, readonly) NSPredicate *predicate;
@property (nonatomic, readonly) NSArray *tagIdentifiers;
@property (nonatomic, readonly) NSString *debugDescription;

+ (id)objc_queryForAllTaggedNotesAllowsRecentlyDeleted:(BOOL)a0;
+ (id)objc_queryForNotesWithTagIdentifier:(id)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)objc_queryForNotesWithTagIdentifiers:(id)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)objc_queryForNotesWithSystemPaperAllowsRecentlyDeleted:(BOOL)a0;
+ (id)objc_queryForPinnedNotes:(BOOL)a0 allowsRecentlyDeleted:(BOOL)a1;
+ (id)objc_queryForNonDeletedNotes;

- (id)replacingTagIdentifier:(id)a0 withNewTagIdentifier:(id)a1;
- (id)removingTagIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end
