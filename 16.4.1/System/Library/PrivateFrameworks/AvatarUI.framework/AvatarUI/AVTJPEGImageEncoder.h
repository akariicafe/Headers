@class NSString;

@interface AVTJPEGImageEncoder : NSObject <AVTImageEncoder>

@property (readonly, nonatomic) double compressionQuality;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)fileExtension;
- (id)dataFromImage:(id)a0;
- (id)imageFromData:(id)a0 error:(id *)a1;
- (id)imageFromURL:(id)a0 error:(id *)a1;
- (id)initWithCompressionQuality:(double)a0;

@end
