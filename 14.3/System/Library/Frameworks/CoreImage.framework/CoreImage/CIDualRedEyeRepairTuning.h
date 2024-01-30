@class NSDictionary;

@interface CIDualRedEyeRepairTuning : NSObject

@property (retain, nonatomic) NSDictionary *repairTuning;
@property (retain, nonatomic) NSDictionary *sessionTuning;

+ (id)sessionParametersForTuning:(unsigned long long)a0;
+ (id)repairParametersForTuning:(unsigned long long)a0;
+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;

- (void)dealloc;
- (id)initWithTuning:(unsigned long long)a0;
- (void)setTuningParametersByPortType:(id)a0 withCameraMetadata:(id)a1;
- (unsigned long long)tuningFromCameraModel:(id)a0 portType:(id)a1;
- (void)updateWithCaptureSetup:(id)a0 portType:(id)a1;

@end
