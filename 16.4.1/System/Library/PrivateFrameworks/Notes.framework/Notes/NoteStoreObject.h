@class NoteAccountObject, NSString, NSArray, NSSet;

@interface NoteStoreObject : NoteCollectionObject

@property (retain, nonatomic) NSString *externalIdentifier;
@property (retain, nonatomic) NoteAccountObject *account;
@property (readonly, retain, nonatomic) NoteStoreObject *parentStore;
@property (readonly, retain, nonatomic) NSArray *ancestorStores;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *changes;
@property (retain, nonatomic) NSString *syncAnchor;

- (id)noteVisibilityTestingForSearchingAccount;
- (id)cacheKey;
- (id)collectionInfo;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)basicAccountIdentifier;
- (unsigned int)maximumServerIntId;
- (id)notesForServerIntIds:(id)a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;
- (id)notesForServerIntIds:(id)a0;
- (id)notesForIntegerIds:(id)a0;
- (id)searchDomainIdentifier;
- (id)notesForServerIds:(id)a0;
- (unsigned long long)minimumSequenceNumberForServerIntIds:(id)a0;
- (id)notesForGUIDs:(id)a0;
- (id)predicateForNotes;
- (id)titleForTableViewCell;
- (id)notesForServerIntIdsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 ascending:(BOOL)a1 limit:(unsigned long long)a2;

@end
