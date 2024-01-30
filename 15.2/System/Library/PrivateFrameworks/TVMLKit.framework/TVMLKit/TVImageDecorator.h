@class NSString;

@interface TVImageDecorator : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } loaderScaleToSize;
@property (readonly, nonatomic) BOOL loaderCropToFit;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedSize;
@property (readonly, copy, nonatomic) NSString *decoratorIdentifier;

- (BOOL)isEqual:(id)a0;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(BOOL)a2;

@end
