@class NSString, NSManagedObjectModel;

@interface PFUbiquityBaselineOperation : PFUbiquityImportOperation

@property (readonly, nonatomic) NSString *modelVersionHash;
@property (readonly, nonatomic) NSManagedObjectModel *model;

- (void)dealloc;
- (id)initWithPersistentStore:(id)a0 localPeerID:(id)a1 andUbiquityRootLocation:(id)a2;
- (id)description;

@end
