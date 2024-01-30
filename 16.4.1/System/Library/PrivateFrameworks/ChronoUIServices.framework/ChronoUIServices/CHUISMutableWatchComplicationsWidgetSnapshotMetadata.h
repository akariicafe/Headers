@class NSArray, CHSGaugeParameters, NSData;

@interface CHUISMutableWatchComplicationsWidgetSnapshotMetadata : CHUISWatchComplicationsWidgetSnapshotMetadata

@property (copy, nonatomic) NSArray *text;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) CHSGaugeParameters *gauge;
@property (copy, nonatomic) NSData *gaugeProviderData;
@property (copy, nonatomic) NSData *gaugeLowerTextProviderData;
@property (copy, nonatomic) NSData *gaugeUpperTextProviderData;

- (void)setText:(id)a0;
- (void)setImages:(id)a0;
- (void)setGauge:(id)a0;
- (void)setGaugeLowerTextProviderData:(id)a0;
- (void)setGaugeProviderData:(id)a0;
- (void)setGaugeUpperTextProviderData:(id)a0;

@end
