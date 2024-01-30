@interface TKAdaptiveImageAPI : NSObject

+ (void)registerService:(id)a0 handler:(id /* block */)a1;
+ (id /* block */)getService:(id)a0;
+ (id)defaultImageService;
+ (void)setDefaultImageService:(id)a0;

@end
