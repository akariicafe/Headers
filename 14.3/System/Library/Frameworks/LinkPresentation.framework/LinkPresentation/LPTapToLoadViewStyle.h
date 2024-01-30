@class UIColor, LPTextViewStyle, LPPointUnit;

@interface LPTapToLoadViewStyle : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *tapHighlightColor;
@property (readonly, nonatomic) LPTextViewStyle *caption;
@property (retain, nonatomic) LPPointUnit *width;
@property (retain, nonatomic) LPPointUnit *height;

- (id)initWithPlatform:(long long)a0;
- (void).cxx_destruct;

@end
