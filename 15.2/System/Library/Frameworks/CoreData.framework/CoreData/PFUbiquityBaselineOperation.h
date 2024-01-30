@class NSString, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
}

- (id)initWithPersistentStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;
- (id)description;
- (void)dealloc;

@end
