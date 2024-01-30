@class NSString, NSNumber, NSDictionary;

@interface SASStartSpeech : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *audioDestination;
@property (copy, nonatomic) NSString *audioSource;
@property (nonatomic) BOOL clearContext;
@property (nonatomic) int codec;
@property (copy, nonatomic) NSString *deviceIdentifier;
@property (copy, nonatomic) NSString *deviceModel;
@property (nonatomic) BOOL disableAutoEndpointing;
@property (copy, nonatomic) NSString *dspStatus;
@property (nonatomic) BOOL enablePartialResults;
@property (copy, nonatomic) NSString *headsetAddress;
@property (copy, nonatomic) NSString *headsetId;
@property (copy, nonatomic) NSString *headsetName;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (copy, nonatomic) NSNumber *noiseReductionLevel;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSDictionary *voiceTriggerEventInfo;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startSpeech;
+ (id)startSpeechWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
