@interface VCPRequest : NSObject {
    int _width;
    int _height;
    int _maxNumHands;
    int _humanActionWindowSize;
    unsigned int _motionFlowComputationAccuracy;
}

@property (readonly, nonatomic) BOOL useCPUOnly;
@property (readonly, nonatomic) unsigned int revision;

- (id)init;
- (id)initWithOptions:(id)a0;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;

@end
