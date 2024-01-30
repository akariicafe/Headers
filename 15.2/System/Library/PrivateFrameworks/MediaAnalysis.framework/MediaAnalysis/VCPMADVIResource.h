@class VIService, NSObject;
@protocol OS_dispatch_queue;

@interface VCPMADVIResource : VCPMADResource {
    NSObject<OS_dispatch_queue> *_queue;
    VIService *_service;
}

@property (readonly, nonatomic) VIService *service;

- (void)purge;
- (double)inactiveCost;
- (void).cxx_destruct;
- (id)init;
- (double)activeCost;

@end
