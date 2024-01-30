@class NSString, CIContext, PFAVReaderWriter;

@interface PFColorConverter : NSObject <PFAVReaderWriterAdjustDelegate> {
    PFAVReaderWriter *_readerWriter;
    CIContext *_conversionContext;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)adjustPixelBuffer:(struct __CVBuffer { } *)a0 toOutputBuffer:(struct __CVBuffer { } *)a1;
- (void)convertWithVideoURL:(id)a0 outURL:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;

@end
