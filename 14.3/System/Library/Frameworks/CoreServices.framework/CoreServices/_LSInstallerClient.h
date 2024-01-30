@class NSString, NSXPCConnection, NSURL, NSDictionary, NSObject;
@protocol OS_dispatch_group;

@interface _LSInstallerClient : NSObject <LSInstallationServiceCallbackProtocol> {
    NSString *_operationTypeString;
    NSObject<OS_dispatch_group> *_callbackDeliveryGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSURL *bundleURL;
@property (retain, nonatomic) NSDictionary *options;
@property (nonatomic) unsigned long long operationType;
@property (readonly, nonatomic) NSString *operationTypeString;
@property (nonatomic, getter=isUninstaller) BOOL uninstaller;
@property (readonly) BOOL allCallbacksDeleviered;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)installerWithBundleID:(id)a0 options:(id)a1 callbackBlock:(id /* block */)a2;
+ (id)unInstallerWithBundleID:(id)a0 options:(id)a1 callbackBlock:(id /* block */)a2;
+ (id)installerWithBundleID:(id)a0 bundleURL:(id)a1 options:(id)a2 callbackBlock:(id /* block */)a3;

- (id)operationTypeString;
- (void)_waitForAllCallbackMessagesToExecute;
- (void)callbackDeliveryComplete;
- (void)updateCallbackWithData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_beginOperation;
- (void)_invalidate;

@end
