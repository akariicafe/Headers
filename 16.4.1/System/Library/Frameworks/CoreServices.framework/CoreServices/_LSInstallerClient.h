@class NSString, NSDictionary, NSXPCConnection, NSObject;
@protocol OS_dispatch_group, LSMIInstallUninstallCall;

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {
    NSString *_operationTypeString;
    NSObject<OS_dispatch_group> *_callbackDeliveryGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (readonly) NSString *bundleID;
@property (copy, nonatomic) id<LSMIInstallUninstallCall> miCall;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long operationType;
@property (readonly, nonatomic) NSString *operationTypeString;
@property (readonly, getter=isUninstaller) BOOL uninstaller;
@property (readonly) BOOL allCallbacksDeleviered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)installerWithBundleID:(id)a0 bundleURL:(id)a1 options:(id)a2 callbackBlock:(id /* block */)a3;
+ (id)revertInstallerWithBundleID:(id)a0 options:(id)a1 callbackBlock:(id /* block */)a2;
+ (id)unInstallerWithBundleID:(id)a0 options:(id)a1 callbackBlock:(id /* block */)a2;

- (void)_beginOperation;
- (id)bundleID;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)_waitForAllCallbackMessagesToExecute;
- (void)callbackDeliveryComplete;
- (id)initWithMICall:(id)a0 options:(id)a1 callbackBlock:(id /* block */)a2;
- (id)operationTypeString;
- (void)updateCallbackWithData:(id)a0;

@end
