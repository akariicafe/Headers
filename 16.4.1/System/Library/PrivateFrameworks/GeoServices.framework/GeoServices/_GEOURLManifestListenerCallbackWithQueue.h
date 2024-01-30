@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_voucher;

@interface _GEOURLManifestListenerCallbackWithQueue : NSObject <_GEOURLManifestListenerCallback> {
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_voucher> *_voucher;
    unsigned int _qos;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performHandler:(BOOL)a0;
- (id)initWithQueue:(id)a0 handler:(id /* block */)a1;
- (void).cxx_destruct;

@end
