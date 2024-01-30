@class NSString;

@interface INUIImageSizeProvider : NSObject <INImageSizeProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downscaledPNGImageForImage:(id)a0 size:(struct { double x0; double x1; })a1 error:(id *)a2;
+ (struct { double x0; double x1; })imageSizeForImage:(id)a0;


@end
