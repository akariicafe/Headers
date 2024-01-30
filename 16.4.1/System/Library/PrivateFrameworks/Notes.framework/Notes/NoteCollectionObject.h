@class NSString;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAllNotesContainer;

- (id)noteVisibilityTestingForSearchingAccount;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)cacheKey;
- (id)collectionInfo;
- (id)predicateForSearchableAttachments;
- (id)predicateForSearchableNotes;
- (id)basicAccountIdentifier;
- (BOOL)isTitleValid:(id)a0 error:(id *)a1;
- (id)searchDomainIdentifier;
- (id)predicateForNotes;
- (id)titleForTableViewCell;

@end
