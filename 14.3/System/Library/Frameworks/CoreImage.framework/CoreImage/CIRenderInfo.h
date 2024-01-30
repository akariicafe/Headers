@interface CIRenderInfo : NSObject {
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)a0;

- (id)init;
- (id)_pdfDataRepresentation;
- (void)dealloc;
- (long long)kernelExecutionCycles;
- (id)description;
- (id)initWithCompletedTask:(id)a0;
- (long long)pixelsOverdrawn;
- (double)timeForNodeID:(unsigned long long)a0;

@end
