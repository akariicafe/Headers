@class NSString;

@interface BWAFResonanceCalibrationAnalyticsPayload : NSObject <BWCoreAnalyticsPayload>

@property (nonatomic) long long magneticFieldMagnitude;
@property (retain, nonatomic) NSString *portType;
@property (nonatomic) unsigned int calibrationStatus;
@property (nonatomic) int afAxisResonantFreq;
@property (nonatomic) int deltaAFAxisResonantFreq;
@property (nonatomic) int afAxisDampingCoefficient;
@property (nonatomic) int deltaAFAxisDampingCoefficient;
@property (nonatomic) int afLoopGain;
@property (nonatomic) int afGelModelD1Coefficient;
@property (nonatomic) int afGelModelD2Coefficient;
@property (nonatomic) int afGelModelP1Coefficient;
@property (nonatomic) int afGelModelP2Coefficient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)eventDictionary;
- (id)init;
- (id)eventName;
- (void)dealloc;
- (void)reset;

@end
