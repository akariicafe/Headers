@class NSString, NSSet, NoteAccountObject;

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NoteAccountObject *account;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *changes;
@property (retain, nonatomic) NSString *syncAnchor;

- (id)collectionInfo;
- (id)cacheKey;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)titleForTableViewCell;
- (id)predicateForNotes;
- (id)basicAccountIdentifier;
- (id)notesForServerIntIds:(id)a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (id)searchDomainIdentifier;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)notesForServerIds:(id)a0;
- (unsigned int)maximumServerIntId;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)a0;
- (id)notesForIntegerIds:(id)a0;
- (id)notesForServerIntIds:(id)a0;
- (id)notesForGUIDs:(id)a0;

@end
