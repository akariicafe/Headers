@interface VCPRequest : NSObject {
    int _width;
    int _height;
    int _maxNumHands;
    int _humanActionWindowSize;
}

@property (readonly, nonatomic) BOOL useCPUOnly;
@property (readonly, nonatomic) unsigned int revision;

- (id)initWithOptions:(id)a0;
- (id)init;
- (BOOL)updateWithOptions:(id)a0 error:(id *)a1;
- (unsigned int)preferredPixelFormat;
- (struct CGSize { double x0; double x1; })preferredInputSizeWithOptions:(id)a0 error:(id *)a1;
- (BOOL)cleanupWithOptions:(id)a0 error:(id *)a1;

@end
