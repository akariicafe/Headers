@class NSString, NSMutableDictionary;

@interface BWVariableFrameRateParameters : NSObject

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) int motionThreshold;
@property (readonly, nonatomic) NSMutableDictionary *aeMaxGain;

- (id)description;
- (id)initWithPortType:(id)a0 sensorIDDictionary:(id)a1;
- (void)dealloc;

@end
