@interface VUIImageFactory : NSObject

+ (id)makeImageViewWithResourceDescriptor:(id)a0 existingView:(id)a1;
+ (id)makeImageProxyWithDescriptor:(id)a0;
+ (id)makeImageViewWithDescriptor:(id)a0 existingView:(id)a1;
+ (id)_URLFromSource:(id)a0 extension:(id)a1 cropdCode:(id)a2 imageSize:(struct CGSize { double x0; double x1; })a3 centerGrowth:(BOOL)a4 focusSizeIncrease:(double)a5;
+ (id)_imageProxyWithURL:(id)a0;
+ (id)_makeImageViewWithDescriptor:(id)a0 proxy:(id)a1 existingView:(id)a2;
+ (id)_getResourceImageFromDescriptor:(id)a0;

@end
