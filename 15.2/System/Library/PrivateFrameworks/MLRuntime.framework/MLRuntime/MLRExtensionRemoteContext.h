@class NSString, NSObject;
@protocol OS_os_transaction, MLRTaskPerforming;

@interface MLRExtensionRemoteContext : NSExtensionContext <MLRExtensionRemoteProtocol>

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) id<MLRTaskPerforming> plugin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionAuxiliaryHostProtocol;

- (void).cxx_destruct;
- (id)initWithPlugin:(id)a0;
- (void)stop;
- (void)performDodMLTask:(id)a0 sandBoxExtensions:(id)a1 completion:(id /* block */)a2;
- (void)performTrialTask:(id)a0 completion:(id /* block */)a1;
- (id)createDodMLServer;
- (id)privatizeAndEncryptInplace:(id)a0 forRecipe:(id)a1 error:(id *)a2;
- (id)writeBinaryDataAndReturnURL:(id)a0 error:(id *)a1;
- (BOOL)loadPluginIfNecessaryWithError:(id *)a0;
- (id)processTaskResult:(id)a0 forTask:(id)a1 duration:(double)a2 error:(id *)a3;
- (id)createMLRTrialTaskWithTask:(id)a0;

@end
