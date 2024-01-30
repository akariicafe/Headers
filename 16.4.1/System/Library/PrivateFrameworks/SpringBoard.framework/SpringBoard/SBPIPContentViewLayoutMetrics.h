@class NSString, SBPIPContentViewLayoutMetricsSizePolicy;

@interface SBPIPContentViewLayoutMetrics : NSObject

@property (class, readonly, nonatomic) double unstashedPeripheryPadding;
@property (class, readonly, nonatomic) double minimumLandscapePadding;

@property (readonly, copy, nonatomic) NSString *contentTypeIdentifier;
@property (readonly, nonatomic) double padding;
@property (readonly, nonatomic) double paddingWhileStashed;
@property (readonly, nonatomic) struct CGSize { double width; double height; } minimumStashedTabSize;
@property (readonly, nonatomic) double defaultCornerRadius;
@property (readonly, nonatomic) SBPIPContentViewLayoutMetricsSizePolicy *sizePolicy;
@property (readonly, nonatomic) unsigned long long defaultPosition;
@property (readonly, nonatomic) BOOL prefersDefaultPosition;

+ (void)microPIPLandscapeSizePreferences:(id *)a0 portraitSizePreferences:(id *)a1 squareSizePreferences:(id *)a2;
+ (id)pegasusDefaultMetrics;
+ (id)pegasusDefaultMicroPIPMetrics;
+ (id)pegasusMetricsForContentType:(long long)a0;
+ (id)pegasusQNBacklinkMetrics;
+ (id)pegasusScreenSharingMetrics;
+ (id)pegasusVideoCallMetrics;
+ (void)screenSharingLandscapeSizePreferences:(id *)a0 portraitSizePreferences:(id *)a1 squareSizePreferences:(id *)a2;
+ (id)systemNotesMetricsForPresentationMode:(long long)a0;
+ (void)videoCallLandscapeSizePreferences:(id *)a0 portraitSizePreferences:(id *)a1 squareSizePreferences:(id *)a2;
+ (void)videoContentLandscapeSizePreferences:(id *)a0 portraitSizePreferences:(id *)a1 squareSizePreferences:(id *)a2;

- (void).cxx_destruct;
- (id)initWithContentTypeIdentifier:(id)a0 padding:(double)a1 paddingWhileStashed:(double)a2 minimumStashedTabSize:(struct CGSize { double x0; double x1; })a3 defaultCornerRadius:(double)a4 sizePolicy:(id)a5 defaultPosition:(unsigned long long)a6;
- (id)initWithContentTypeIdentifier:(id)a0 padding:(double)a1 paddingWhileStashed:(double)a2 minimumStashedTabSize:(struct CGSize { double x0; double x1; })a3 defaultCornerRadius:(double)a4 sizePolicy:(id)a5 defaultPosition:(unsigned long long)a6 prefersDefaultPosition:(BOOL)a7;

@end
