@class NSString, NSNumber, SASStartSpeech;

@interface SAStartRequest : SABaseCommand <SAServerBoundCommand, SATurnIdContaining>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *origin;
@property (copy, nonatomic) NSString *applicationName;
@property (nonatomic) BOOL clearContext;
@property (nonatomic) BOOL eyesFree;
@property (nonatomic) BOOL handsFree;
@property (copy, nonatomic) NSString *hardwareBuild;
@property (copy, nonatomic) NSString *inputOrigin;
@property (copy, nonatomic) NSNumber *isCarryDevice;
@property (copy, nonatomic) NSNumber *isWatchFaceRequest;
@property (copy, nonatomic) NSString *motionActivity;
@property (copy, nonatomic) NSNumber *motionConfidence;
@property (copy, nonatomic) NSString *responseMode;
@property (retain, nonatomic) SASStartSpeech *sourceSpeechRequest;
@property (nonatomic) BOOL talkOnly;
@property (nonatomic) BOOL textToSpeechIsMuted;
@property (copy, nonatomic) NSString *turnId;
@property (copy, nonatomic) NSString *utterance;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)startRequest;
+ (id)startRequestWithDictionary:(id)a0 context:(id)a1;

- (BOOL)requiresResponse;
- (id)groupIdentifier;
- (id)encodedClassName;

@end
