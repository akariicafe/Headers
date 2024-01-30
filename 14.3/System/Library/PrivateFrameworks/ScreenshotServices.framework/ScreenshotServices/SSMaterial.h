@class UIColor, CAFilter;

@interface SSMaterial : NSObject {
    CAFilter *_filter;
    UIColor *_color;
}

@property (readonly, nonatomic) CAFilter *filter;
@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) double colorAlpha;

+ (id)cropHandle;
+ (id)vellumOpacitySliderTrack;
+ (id)vellumOpacitySliderValueImage;

- (void).cxx_destruct;
- (void)applyToView:(id)a0;
- (id)_initWithFilterType:(id)a0 color:(id)a1;

@end
