@class NSString, MOVStreamFrameConverter;

@interface DefaultPostProcessor : NSObject <MOVStreamPostProcessor> {
    MOVStreamFrameConverter *_converter;
}

@property BOOL removePadding;
@property (readonly) unsigned int processedPixelFormat;
@property unsigned long long exactBytesPerRow;
@property (nonatomic) unsigned int originalPixelFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldRemovePaddingOfPixelBuffer:(struct __CVBuffer { } *)a0 metadata:(id)a1;
- (struct __CVBuffer { } *)pixelBufferWithoutPaddingFromPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;
- (BOOL)shouldChangeBytesPerRowOfPixelBuffer:(struct __CVBuffer { } *)a0;
- (struct __CVBuffer { } *)pixelBufferWithExactByterPerRow:(unsigned long long)a0 fromPixelBuffer:(struct __CVBuffer { } *)a1 error:(id *)a2;
- (unsigned long long)minimumBytesPerRowForPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)initWithOriginalPixelFormat:(unsigned int)a0;
- (struct __CVBuffer { } *)processedPixelBufferFrom:(struct __CVBuffer { } *)a0 metadata:(id)a1 error:(id *)a2;

@end
