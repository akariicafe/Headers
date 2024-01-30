@class NSString;

@interface AVTHEIFImageEncoder : NSObject <AVTImageEncoder>

@property (readonly, nonatomic) BOOL useHEICSSequence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)HEICSSequenceEncoder;
+ (id)defaultHEICEncoder;

- (id)fileExtension;
- (id)dataFromImage:(id)a0;
- (id)imageFromData:(id)a0 error:(id *)a1;
- (id)imageFromURL:(id)a0 error:(id *)a1;
- (id)initUsingHeicsSequence:(BOOL)a0;

@end
