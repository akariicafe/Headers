@class NSArray;

@interface FMPrecisionFindingUI.FMPFARTrackingConfiguration : ARWorldTrackingConfiguration

@property (class, nonatomic, readonly) NSArray *supportedVideoFormats;

- (id)initPrivate;
- (id)init;

@end
