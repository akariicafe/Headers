@class PXRadarConfiguration;

@interface PXContentSyndicationReviewRadarConfigurationProvider : NSObject <PXRadarConfigurationProvider>

@property (readonly, nonatomic) BOOL includeAssetImages;
@property (readonly, nonatomic) BOOL includeAssetThumbnails;
@property (readonly, nonatomic) PXRadarConfiguration *radarConfiguration;

@end
