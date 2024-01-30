@class UIImage;

@interface PKPaletteShape : NSObject {
    UIImage *_image;
}

@property (readonly) long long shapeType;
@property (readonly, nonatomic) UIImage *image;

+ (id)shapeWithType:(long long)a0;

- (void).cxx_destruct;
- (id)initWithShapeType:(long long)a0;

@end
