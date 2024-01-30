@class UIColor;

@interface CKMessagesComplicationSpecs : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeModularSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeUtilitarianSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeUtilitarianLarge;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircular;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircularSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircularMedium;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircularXL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCorner;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCornerSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeExtraLarge;
@property (readonly, nonatomic) UIColor *canvasBackgroundColor;
@property (readonly, nonatomic) UIColor *bubbleTintColor;
@property (readonly, nonatomic) UIColor *bubbleTextColor;

- (id)initWithDevice:(id)a0;
- (struct CGSize { double x0; double x1; })canvasSizeForFamily:(long long)a0;
- (struct CGSize { double x0; double x1; })canvasSizeForFamily:(long long)a0 andTemplate:(id)a1;
- (void)configureDeviceDependentSpecsForDevice:(id)a0;
- (double)imageFramePaddingForFamily:(long long)a0;
- (BOOL)unreadCountShouldBeDrawnOnBubbleForFamily:(long long)a0;
- (double)verticalTextOffsetForFamily:(long long)a0;

@end
