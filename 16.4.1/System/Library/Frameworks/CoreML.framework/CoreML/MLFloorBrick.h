@class NSArray, NSString;

@interface MLFloorBrick : NSObject <EspressoBrick>

@property (readonly, nonatomic) NSArray *inputRanks;
@property (readonly, nonatomic) NSArray *outputRanks;
@property (readonly, nonatomic) NSArray *inputShapes;
@property (readonly, nonatomic) NSArray *outputShapes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParameters:(id)a0;
- (void).cxx_destruct;
- (void)computeOnCPUWithInputTensors:(id)a0 outputTensors:(id)a1;
- (BOOL)hasGPUSupport;
- (id)setupForInputShapes:(id)a0 withParameters:(id)a1;

@end
