@class NSString;

@interface AVTImageIOImageEncoder : NSObject <AVTImageEncoder>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addImageOptions;
+ (id)typeIdentifier;

- (id)imageFromImageSource:(struct CGImageSource { } *)a0 error:(id *)a1;
- (id)fileExtension;
- (id)imageFromData:(id)a0 error:(id *)a1;
- (id)dataFromImage:(id)a0;
- (id)imageFromURL:(id)a0 error:(id *)a1;

@end
