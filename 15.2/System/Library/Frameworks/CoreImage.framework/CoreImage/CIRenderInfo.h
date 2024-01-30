@interface CIRenderInfo : NSObject {
    void *_priv;
}

@property (readonly) double kernelExecutionTime;
@property (readonly) long long passCount;
@property (readonly) long long pixelsProcessed;

+ (id)renderInfoWithCompletedTask:(id)a0;

- (double)timeForNodeID:(unsigned long long)a0;
- (id)description;
- (id)_pdfDataRepresentation;
- (long long)kernelExecutionCycles;
- (long long)pixelsOverdrawn;
- (id)init;
- (id)initWithCompletedTask:(id)a0;
- (void)dealloc;

@end
