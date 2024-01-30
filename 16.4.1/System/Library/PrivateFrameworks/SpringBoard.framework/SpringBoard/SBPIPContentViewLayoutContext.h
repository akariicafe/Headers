@class NSString, SBPIPDefaults;

@interface SBPIPContentViewLayoutContext : NSObject

@property (nonatomic) double currentAspectRatio;
@property (nonatomic) double currentSize;
@property (readonly, nonatomic, getter=hasSizeChanged) BOOL sizeChanged;
@property (nonatomic) double minimumSizePreference;
@property (nonatomic) double maximumSizePreference;
@property (nonatomic) double minimumSizeSpanBetweenPreferredSizes;
@property (nonatomic) double maximumSizeSpanForPreferredSizeTuning;
@property (retain, nonatomic) SBPIPDefaults *defaults;
@property (copy, nonatomic) NSString *contentTypeIdentifier;

- (void).cxx_destruct;
- (id)initWithPlatformMetrics:(id)a0 contentSize:(struct CGSize { double x0; double x1; })a1 defaults:(id)a2;
- (void)setCurrentSize:(double)a0 forAspectRatio:(double)a1;
- (void)updatePlatformMetrics:(id)a0;

@end
