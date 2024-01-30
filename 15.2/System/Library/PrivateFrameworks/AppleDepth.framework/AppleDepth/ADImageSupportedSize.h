@interface ADImageSupportedSize : NSObject

@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) unsigned long long layout;

+ (id)createWithSize:(struct CGSize { double x0; double x1; })a0 andLayout:(unsigned long long)a1;

@end
