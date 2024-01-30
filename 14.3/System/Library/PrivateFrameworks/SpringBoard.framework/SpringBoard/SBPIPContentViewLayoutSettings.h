@interface SBPIPContentViewLayoutSettings : NSObject

@property (nonatomic) double defaultSize;
@property (nonatomic) double minimumSize;
@property (nonatomic) double maximumSize;
@property (nonatomic) double currentSize;
@property (nonatomic) double minimumSizePreference;
@property (nonatomic) double maximumSizePreference;
@property (nonatomic) double minimumSizeSpanBetweenPreferredSizes;
@property (nonatomic) double maximumSizeSpanForPreferredSizeTuning;
@property (nonatomic) unsigned long long currentPosition;
@property (nonatomic) BOOL defaultToMinimumPreferredContentSize;
@property (readonly, nonatomic, getter=hasSizeChanged) BOOL sizeChanged;

+ (double)_maximumSize;
+ (double)_minimumSize;
+ (id)_sharedInstance;
+ (void)setContentViewSize:(struct CGSize { double x0; double x1; })a0;
+ (double)contentViewPadding;
+ (void)setContentViewPosition:(unsigned long long)a0;
+ (double)_defaultSize;
+ (struct CGSize { double x0; double x1; })minimumStashTabSize;
+ (struct CGSize { double x0; double x1; })defaultContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (double)contentViewPaddingWhileStashed;
+ (void)setMaximumSizeSpanForPreferredSizeTuning:(double)a0;
+ (void)setMinimumSizeSpanBetweenPreferredSizes:(double)a0;
+ (unsigned long long)currentContentViewPosition;
+ (struct CGSize { double x0; double x1; })currentContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })minimumPreferredContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })maximumPreferredContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })minimumPossibleContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })maximumPossibleContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0;
+ (double)_contentViewPaddingWhileStashed:(BOOL)a0;
+ (struct CGSize { double x0; double x1; })_contentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0 currentSize:(double)a1;
+ (struct CGSize { double x0; double x1; })_minimumContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0 minimumReferenceSize:(double)a1;
+ (struct CGSize { double x0; double x1; })_maximumContentViewSizeForAspectRatio:(struct CGSize { double x0; double x1; })a0 maximumReferenceSize:(double)a1;
+ (void)setShouldDefaultToMinimumPreferredContentSize:(BOOL)a0;

- (unsigned long long)position;
- (id)init;
- (double)size;
- (void)setPosition:(unsigned long long)a0;
- (void)setSize:(double)a0;

@end
