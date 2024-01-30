@class NSString, NSNumber;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (retain, nonatomic) NSNumber *transientNoteCount;

- (id)predicateForSearchableNotes;
- (BOOL)isTitleValid:(id)a0 error:(id *)a1;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)collectionInfo;
- (id)cacheKey;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)titleForTableViewCell;
- (id)predicateForNotes;
- (id)basicAccountIdentifier;
- (id)predicateForSearchableAttachments;
- (id)searchDomainIdentifier;
- (void).cxx_destruct;

@end
