@class NSString, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation {
    NSString *_modelVersionHash;
    NSManagedObjectModel *_model;
}

- (void)dealloc;
- (id)description;
- (id)initWithPersistentStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;

@end
