@class UIImage;
@protocol PBFPosterPreview;

@interface PBFPosterSelectionConfigurationMetadata : NSObject

@property (retain, nonatomic) UIImage *cachedSnapshot;
@property (retain, nonatomic) id<PBFPosterPreview> posterPreview;

- (void).cxx_destruct;

@end
