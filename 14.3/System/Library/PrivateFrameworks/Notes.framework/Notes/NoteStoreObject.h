@class NSString, NSSet, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NoteAccountObject *account;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *changes;
@property (retain, nonatomic) NSString *syncAnchor;

- (id)collectionInfo;
- (id)notesForIntegerIds:(id)a0;
- (id)notesForServerIntIds:(id)a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (id)notesForServerIds:(id)a0;
- (id)notesForGUIDs:(id)a0;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (id)notesForServerIntIds:(id)a0;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)a0;
- (id)basicAccountIdentifier;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)predicateForNotes;
- (id)searchDomainIdentifier;

@end
