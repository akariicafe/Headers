@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject

@property (retain, nonatomic) NSDictionary *repairTuning;
@property (retain, nonatomic) NSDictionary *sessionTuning;

+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;
+ (id)repairParametersForTuning:(unsigned long long)a0;
+ (id)sessionParametersForTuning:(unsigned long long)a0;

- (void)dealloc;
- (id)initWithTuning:(unsigned long long)a0;
- (unsigned long long)tuningFromCameraModel:(id)a0 portType:(id)a1;
- (void)setTuningParametersByPortType:(id)a0 withCameraMetadata:(id)a1;
- (void)updateWithCaptureSetup:(id)a0 portType:(id)a1;

@end
