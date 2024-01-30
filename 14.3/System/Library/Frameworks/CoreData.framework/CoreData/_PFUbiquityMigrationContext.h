@class PFUbiquityStoreSaveSnapshot, PFUbiquityTransactionLog;

@interface _PFUbiquityMigrationContext : NSObject {
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquityStoreSaveSnapshot *_sourceStoreSaveSnapshot;
    PFUbiquityStoreSaveSnapshot *_destinationStoreSaveSnapshot;
}

- (void)dealloc;

@end
