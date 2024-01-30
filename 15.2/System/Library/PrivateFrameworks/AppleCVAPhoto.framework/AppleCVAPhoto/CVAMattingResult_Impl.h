@class NSString;
@protocol CVADisparityPostprocessingResult;

@interface CVAMattingResult_Impl : NSObject <CVAMattingResult>

@property (readonly) id<CVADisparityPostprocessingResult> disparityPostprocessingResult;
@property (readonly) struct __CVBuffer { } *alphaMattePixelBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDisparityPostprocessingResult:(id)a0 alphaMattePixelBuffer:(struct __CVBuffer { } *)a1;

@end
