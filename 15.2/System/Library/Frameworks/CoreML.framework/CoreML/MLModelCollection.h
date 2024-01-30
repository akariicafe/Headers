@class NSDictionary, NSString, TRIClient;

@interface MLModelCollection : NSObject

@property (copy, nonatomic) NSDictionary *entries;
@property (copy, nonatomic) NSString *deploymentID;
@property (readonly, nonatomic) NSString *namespaceName;
@property (readonly, nonatomic) TRIClient *trialClient;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (Class)getTrialDownloadOptionsClass;
+ (Class)getTrialClientClass;
+ (id)_namespaceNameFromCollectionIdentifier:(id)a0;
+ (id)beginAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (Class)getTrialLevelClass;
+ (void)endAccessingModelCollectionWithIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (Class)getTrialExperimentIdentifiersClass;
+ (Class)getTrialFactorLevelClass;
+ (Class)getTrialFileClass;
+ (Class)getTrialFactorClass;

- (BOOL)_register;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)_downloadWithProgress:(id /* block */)a0;
- (void)_registerForUpdates;
- (BOOL)_endAccess;
- (void)_handleTrialUpdateForNamespaceName:(id)a0;
- (void)_setDeploymentID;
- (void)_populateEntries;
- (id)_downloadOptions;

@end
