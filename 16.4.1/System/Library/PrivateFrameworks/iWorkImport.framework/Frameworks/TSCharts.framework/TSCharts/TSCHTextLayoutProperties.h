@interface TSCHTextLayoutProperties : NSObject

@property (nonatomic) int textFlags;
@property (nonatomic) struct CGSize { double width; double height; } minSize;
@property (nonatomic) struct CGSize { double width; double height; } maxSize;

+ (id)defaultPropertiesForWrapWidth:(double)a0;
+ (id)placeTitleAtCenterPropertiesForWrapWidth:(double)a0;

- (id)initWithTextFlags:(int)a0 minSize:(struct CGSize { double x0; double x1; })a1 maxSize:(struct CGSize { double x0; double x1; })a2;

@end
