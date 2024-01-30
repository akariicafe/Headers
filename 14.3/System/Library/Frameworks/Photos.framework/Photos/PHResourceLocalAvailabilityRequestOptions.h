@interface PHResourceLocalAvailabilityRequestOptions : NSObject

@property (nonatomic) BOOL treatLivePhotoAsStill;
@property (nonatomic) BOOL dontAllowRAW;
@property (nonatomic) BOOL includeAllAssetResources;

- (id)description;

@end
