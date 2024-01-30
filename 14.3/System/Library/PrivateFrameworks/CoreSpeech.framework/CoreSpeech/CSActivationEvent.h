@class NSString, NSDictionary;

@interface CSActivationEvent : NSObject

@property (readonly, nonatomic) NSString *UUID;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSString *deviceId;
@property (retain, nonatomic) NSDictionary *activationInfo;
@property (nonatomic) unsigned long long hosttime;
@property (nonatomic) float vadScore;
@property (readonly, nonatomic) NSString *localizedDescription;

+ (id)builtInMicVoiceTriggerEvent:(id)a0 hostTime:(unsigned long long)a1;
+ (id)remoteMicVoiceTriggerEvent:(id)a0 activationInfo:(id)a1 hostTime:(unsigned long long)a2;
+ (id)jarvisVoiceTriggerEvent:(id)a0 activationInfo:(id)a1 hostTime:(unsigned long long)a2;
+ (id)mediaserverdLaunchedEvent:(unsigned long long)a0;
+ (id)remoteMicVADEvent:(id)a0 vadScore:(float)a1 hostTime:(unsigned long long)a2;
+ (id)remoraVoiceTriggerEvent:(id)a0 hostTime:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 vadScore:(float)a3 hosttime:(unsigned long long)a4;
- (id)xpcObject;
- (id)_activationTypeString;
- (id)initWithType:(unsigned long long)a0 deviceId:(id)a1 activationInfo:(id)a2 hosttime:(unsigned long long)a3;
- (id)initWithXPCObject:(id)a0;

@end
