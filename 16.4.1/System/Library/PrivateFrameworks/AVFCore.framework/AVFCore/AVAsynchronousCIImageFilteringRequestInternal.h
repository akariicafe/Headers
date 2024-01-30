@class CIImage, AVAsynchronousVideoCompositionRequest;

@interface AVAsynchronousCIImageFilteringRequestInternal : NSObject

@property (retain, nonatomic) AVAsynchronousVideoCompositionRequest *compositingRequest;
@property (copy, nonatomic) id /* block */ cancellationTest;
@property (copy, nonatomic) id /* block */ defaultCIContextProvider;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) CIImage *sourceCIImage;
@property (retain, nonatomic) struct __CVBuffer { } *sourcePBuf;

- (void)dealloc;
- (void)_willDeallocOrFinalize;

@end
