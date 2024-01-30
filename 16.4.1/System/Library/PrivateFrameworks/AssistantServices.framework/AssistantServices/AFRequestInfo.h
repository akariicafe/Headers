@class NSUUID, NSString, NSData, SAStartRequest, AFTestRequestOptions, AFSpeechRequestOptions, NSDictionary, SAStartLocalRequest, AFRequestCompletionOptions, NSNumber;

@interface AFRequestInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSNumber *notifyState;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSData *handoffRequestData;
@property (copy, nonatomic) NSString *handoffURLString;
@property (nonatomic) BOOL handoffRequiresUserInteraction;
@property (copy, nonatomic) NSString *handoffNotification;
@property (copy, nonatomic) NSString *correctedSpeech;
@property (copy, nonatomic) NSDictionary *correctedSpeechContext;
@property (copy, nonatomic) SAStartRequest *startRequest;
@property (copy, nonatomic) NSString *directActionAppId;
@property (nonatomic) long long directActionEvent;
@property (copy, nonatomic) AFTestRequestOptions *testRequestOptions;
@property (copy, nonatomic) AFRequestCompletionOptions *requestCompletionOptions;
@property (copy, nonatomic) NSNumber *combinedRank;
@property (copy, nonatomic) NSNumber *combinedScore;
@property (copy, nonatomic) NSString *interactionId;
@property (copy, nonatomic) NSNumber *onDeviceUtterancesPresent;
@property (copy, nonatomic) NSNumber *originalRank;
@property (copy, nonatomic) NSNumber *originalScore;
@property (copy, nonatomic) NSString *previousUtterance;
@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *utteranceSource;
@property (copy, nonatomic) NSString *expectedSpeakerSharedUserID;
@property (nonatomic) unsigned long long expectedSpeakerConfidenceScore;
@property (copy, nonatomic) NSDictionary *nonspeakerConfidenceScores;
@property (nonatomic) BOOL isSiriXRequest;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSUUID *turnIdentifier;
@property (copy, nonatomic) NSUUID *requestIdentifier;
@property (copy, nonatomic) NSString *handoffOriginDeviceName;
@property (nonatomic) long long activationEvent;
@property (copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
@property (copy, nonatomic) SAStartLocalRequest *startLocalRequest;
@property (copy, nonatomic) NSString *legacyDirectActionIdentifier;

+ (id)testRequestWithStartLocalRequest:(id)a0;
+ (id)testRequestWithText:(id)a0 speechRequestOptions:(id)a1 testOptions:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithTimestamp:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)requiresUserInteraction;
- (BOOL)isSpeechRequest;

@end
