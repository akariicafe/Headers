@interface MFMediaExporter : NSObject

+ (int)exportAsset:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (id)log;
+ (id)conversionTimers;
+ (void)setConversionTimers:(id)a0;
+ (id)jpegRepresentationForImageData:(id)a0 inputContentType:(id)a1;

@end
