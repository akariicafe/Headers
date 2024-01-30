@class UIColor;

@interface CKMessagesComplicationSpecs : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeModularSmall;
@property (readonly, nonatomic) double topPaddingModularSmall;
@property (readonly, nonatomic) double fontSizeModularSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeModularSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeUtilitarianSmall;
@property (readonly, nonatomic) double topPaddingUtilitarianSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeUtilitarianSmall;
@property (readonly, nonatomic) double fontSizeUtilitarianSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeUtilitarianLarge;
@property (readonly, nonatomic) double topPaddingUtilitarianLarge;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeUtilitarianLarge;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeCircularSmall;
@property (readonly, nonatomic) double topPaddingCircularSmall;
@property (readonly, nonatomic) double fontSizeCircularSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircularSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeCircularMedium;
@property (readonly, nonatomic) double topPaddingCircularMedium;
@property (readonly, nonatomic) double fontSizeCircularMedium;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircularMedium;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeExtraLarge;
@property (readonly, nonatomic) double topPaddingExtraLarge;
@property (readonly, nonatomic) double fontSizeExtraLarge;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeExtraLarge;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeCircular;
@property (readonly, nonatomic) double topPaddingCircular;
@property (readonly, nonatomic) double fontSizeCircular;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircular;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeCircularXL;
@property (readonly, nonatomic) double topPaddingCircularXL;
@property (readonly, nonatomic) double fontSizeCircularXL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCircularXL;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeCorner;
@property (readonly, nonatomic) double topPaddingCorner;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCorner;
@property (readonly, nonatomic) struct CGSize { double width; double height; } bubbleSizeCornerSmall;
@property (readonly, nonatomic) double topPaddingCornerSmall;
@property (readonly, nonatomic) struct CGSize { double width; double height; } canvasSizeCornerSmall;
@property (readonly, nonatomic) UIColor *canvasBackgroundColor;
@property (readonly, nonatomic) UIColor *bubbleTintColor;
@property (readonly, nonatomic) UIColor *bubbleTextColor;

- (id)initWithDevice:(id)a0;
- (void)configureForCompactVariant;
- (void)configureForRegularVariant;
- (void)configureForLuxoJuniorVariant;
- (void)configureForLuxoSeniorVariant;
- (struct CGSize { double x0; double x1; })bubbleSizeForFamily:(long long)a0 andTemplate:(id)a1;
- (double)topPaddingForFamily:(long long)a0 andTemplate:(id)a1;
- (struct CGSize { double x0; double x1; })canvasSizeForFamily:(long long)a0 andTemplate:(id)a1;
- (struct CGSize { double x0; double x1; })bubbleSizeForFamily:(long long)a0;
- (double)topPaddingForFamily:(long long)a0;
- (double)fontSizeForFamily:(long long)a0;
- (struct CGSize { double x0; double x1; })canvasSizeForFamily:(long long)a0;

@end
