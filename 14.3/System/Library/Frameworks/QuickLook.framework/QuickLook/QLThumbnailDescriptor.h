@interface QLThumbnailDescriptor : NSObject

@property struct CGSize { double width; double height; } size;
@property double scaleFactor;

+ (id)descriptorWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;

@end
