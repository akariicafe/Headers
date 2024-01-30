@class PXRadarConfiguration;

@interface PXContentSyndicationReviewRadarConfigurationProvider : NSObject <PXRadarConfigurationProvider>

@property (readonly, nonatomic) BOOL includeAssetImages;
@property (readonly, nonatomic) PXRadarConfiguration *radarConfiguration;

@end
