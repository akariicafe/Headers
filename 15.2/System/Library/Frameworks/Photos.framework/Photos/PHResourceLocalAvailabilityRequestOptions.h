@class NSObject;
@protocol OS_dispatch_queue;

@interface PHResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic) BOOL treatLivePhotoAsStill;
@property (nonatomic) BOOL dontAllowRAW;
@property (nonatomic) BOOL includeAllAssetResources;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resultHandlerQueue;

- (id)description;
- (void).cxx_destruct;

@end
