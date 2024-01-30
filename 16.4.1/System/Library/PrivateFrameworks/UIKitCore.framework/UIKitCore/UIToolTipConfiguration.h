@class NSString;

@interface UIToolTipConfiguration : NSObject

@property (copy, nonatomic) NSString *toolTip;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;

+ (id)configurationWithToolTip:(id)a0;
+ (id)configurationWithToolTip:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

- (void).cxx_destruct;

@end
