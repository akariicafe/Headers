@class NSString, UIColor, UIFont;

@interface StringDrawingInfo : NSObject

@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) struct CGSize { double width; double height; } size;

+ (id)stringDrawingInfoWithString:(id)a0 color:(id)a1 font:(id)a2 size:(struct CGSize { double x0; double x1; })a3;

- (void).cxx_destruct;

@end
