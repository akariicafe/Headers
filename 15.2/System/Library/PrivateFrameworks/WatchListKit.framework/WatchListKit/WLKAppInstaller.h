@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface WLKAppInstaller : NSObject {
    NSObject<OS_dispatch_queue> *_installQueue;
    NSMutableSet *_installSessions;
}

+ (id)defaultAppInstaller;

- (void).cxx_destruct;
- (id)init;
- (void)installAppForInstallable:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)installAppForInstallable:(id)a0 offer:(id)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;

@end
