@class NSString, NSDictionary, NSSet, NoteStoreObject, NSNumber;

@interface NoteAccountObject : NoteCollectionObject {
    NSNumber *_preventMovingNotesToOtherAccounts;
}

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) NSString *constraintsPath;
@property (retain, nonatomic) NSDictionary *constraints;
@property (retain, nonatomic) NSString *accountIdentifier;
@property (retain, nonatomic) NSSet *stores;
@property (retain, nonatomic) NoteStoreObject *defaultStore;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) long long accountType;
@property (retain, nonatomic) NSString *pathToConstraintsPlist;
@property (nonatomic) BOOL didChooseToMigrate;
@property (readonly, nonatomic) BOOL preventMovingNotesToOtherAccounts;
@property (readonly, nonatomic) BOOL isICloudIMAPAccount;

+ (BOOL)shouldDataAccessCreateAccountForACAccount:(id)a0;

- (id)noteVisibilityTestingForSearchingAccount;
- (id)cacheKey;
- (id)collectionInfo;
- (void)willSave;
- (BOOL)isAllNotesContainer;
- (id)basicAccountIdentifier;
- (BOOL)shouldMarkNotesAsDeleted;
- (BOOL)validateDefaultStore:(id *)a0 error:(id *)a1;
- (void)didTurnIntoFault;
- (id)searchDomainIdentifier;
- (id)storeForExternalId:(id)a0;
- (id)predicateForNotes;
- (id)titleForTableViewCell;
- (void).cxx_destruct;

@end
