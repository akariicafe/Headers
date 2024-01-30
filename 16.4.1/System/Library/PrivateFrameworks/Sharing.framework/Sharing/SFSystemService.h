@class SFService, NSObject;
@protocol OS_dispatch_queue;

@interface SFSystemService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFService *_sfService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)_sfServiceStart;
- (void)_handleSessionStarted:(id)a0;
- (id)init;
- (void)activate;
- (id)description;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_handleGetSystemInfoRequest:(id)a0 responseHandler:(id /* block */)a1;
- (void)_handleProfileInstallForSession:(id)a0 request:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleProfileRemoveForSession:(id)a0 request:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleProfilesGetForSession:(id)a0 request:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleRebootSystemForSession:(id)a0 request:(id)a1 responseHandler:(id /* block */)a2;
- (void)_handleSessionEnded:(id)a0;

@end
