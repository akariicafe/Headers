@interface ADImageDescriptor : NSObject {
    struct CGSize { double width; double height; } _landscapeSize;
    struct CGSize { double width; double height; } _portraitSize;
}

@property (readonly, nonatomic) unsigned int pixelFormat;

+ (id)descriptorWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1;
+ (id)descriptorWithPortraitSize:(struct CGSize { double x0; double x1; })a0 landscapeSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned int)a2;

- (struct CGSize { double x0; double x1; })sizeForLayout:(unsigned long long)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 pixelFormat:(unsigned int)a1;
- (id)initWithPortraitSize:(struct CGSize { double x0; double x1; })a0 landscapeSize:(struct CGSize { double x0; double x1; })a1 pixelFormat:(unsigned int)a2;

@end
