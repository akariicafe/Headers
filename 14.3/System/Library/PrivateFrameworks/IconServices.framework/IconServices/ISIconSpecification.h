@class NSArray;

@interface ISIconSpecification : NSObject

@property (readonly) NSArray *imageSpecifications;
@property (readonly) struct CGSize { double width; double height; } maxSize;
@property (readonly) struct CGSize { double width; double height; } minSize;
@property (readonly) double maxScale;
@property (readonly) double minScale;
@property (readonly) NSArray *allImageSpecifications;

+ (id)macosIconSpecification;
+ (id)macosTemplateIconSpecification;
+ (id)defaultIconSpecification;

- (void).cxx_destruct;
- (id)_initWithImageSpecifiactions:(id)a0;
- (id)imageSpecificationForSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
