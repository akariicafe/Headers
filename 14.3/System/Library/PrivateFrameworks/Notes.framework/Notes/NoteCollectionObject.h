@class NSString, NSNumber;

@interface NoteCollectionObject : NSManagedObject <ICNoteVisibilityTesting>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isAllNotesContainer;
@property (retain, nonatomic) NSNumber *transientNoteCount;

- (id)collectionInfo;
- (void).cxx_destruct;
- (id)predicateForSearchableNotes;
- (BOOL)supportsVisibilityTestingType:(long long)a0;
- (id)predicateForSearchableAttachments;
- (id)basicAccountIdentifier;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForNotes;
- (id)searchDomainIdentifier;

@end
