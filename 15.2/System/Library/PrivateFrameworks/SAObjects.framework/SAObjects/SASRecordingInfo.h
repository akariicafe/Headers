@class NSNumber, NSString;

@interface SASRecordingInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *activationAudioAlertDuration;
@property (copy, nonatomic) NSNumber *activationAudioAlertStartTime;
@property (copy, nonatomic) NSNumber *activationHapticAlertDuration;
@property (copy, nonatomic) NSNumber *activationHapticAlertStartTime;
@property (copy, nonatomic) NSNumber *activationTime;
@property (copy, nonatomic) NSString *alertType;
@property (copy, nonatomic) NSNumber *beamFormingStartTime;
@property (copy, nonatomic) NSNumber *buttonDowntime;
@property (copy, nonatomic) NSNumber *buttonUpTime;
@property (nonatomic) BOOL ringerSwitchOff;
@property (nonatomic) BOOL zeroLatencyLaunch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordingInfo;
+ (id)recordingInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
