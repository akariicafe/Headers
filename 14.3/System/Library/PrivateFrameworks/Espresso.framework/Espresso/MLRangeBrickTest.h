@class NSString;

@interface MLRangeBrickTest : NSObject <EspressoBrick>

@property (readonly, nonatomic) int size;
@property (readonly, nonatomic) int start;
@property (readonly, nonatomic) int stepSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameters:(id)a0;
- (void)computeOnCPUWithInputTensors:(id)a0 outputTensors:(id)a1;
- (BOOL)hasDynamicOutputShape:(unsigned long long)a0;
- (id)computeDynamicOutputShape:(id)a0;
- (id)setupForInputShapes:(id)a0 withParameters:(id)a1;
- (BOOL)hasGPUSupport;

@end
