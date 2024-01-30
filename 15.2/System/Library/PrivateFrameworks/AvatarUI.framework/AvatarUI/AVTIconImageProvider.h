@interface AVTIconImageProvider : NSObject

+ (void)prewarmIconImageForBundleIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2;
+ (void)iconImageForBundleIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 completionBlock:(id /* block */)a3;

@end
