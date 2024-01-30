@class CVNLPCommSafetyHandler, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADImageSafetyClassificationResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    CVNLPCommSafetyHandler *_handler;
}

+ (id)sharedResource;

- (void)purge;
- (id)init;
- (id)handler;
- (void).cxx_destruct;

@end
