@class NSObject;
@protocol OS_dispatch_queue;

@interface DICameraCapture : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

+ (BOOL)requireSecureCamera:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)createSecureCameraError:(id)a0 code:(long long)a1;
- (void)captureWithSecureCamera:(id)a0 completion:(id /* block */)a1;

@end
