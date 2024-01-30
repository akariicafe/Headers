@class NSUUID, NSString, NSData, SAStartRequest, SAStartLocalRequest, AFSpeechRequestOptions, NSDictionary, AFRequestCompletionOptions, NSNumber;

@interface AFRequestInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) unsigned long long options;
@property (copy, nonatomic) NSNumber *notifyState;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *legacyDirectActionIdentifier;
@property (copy, nonatomic) NSString *handoffOriginDeviceName;
@property (copy, nonatomic) NSData *handoffRequestData;
@property (copy, nonatomic) NSString *handoffURLString;
@property (nonatomic) BOOL handoffRequiresUserInteraction;
@property (copy, nonatomic) NSString *handoffNotification;
@property (copy, nonatomic) NSString *correctedSpeech;
@property (copy, nonatomic) NSDictionary *correctedSpeechContext;
@property (copy, nonatomic) SAStartRequest *startRequest;
@property (copy, nonatomic) SAStartLocalRequest *startLocalRequest;
@property (copy, nonatomic) NSString *directActionAppId;
@property (nonatomic) long long directActionEvent;
@property (nonatomic) long long activationEvent;
@property (copy, nonatomic) AFSpeechRequestOptions *speechRequestOptions;
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
@property (readonly, nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSUUID *turnIdentifier;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)requiresUserInteraction;
- (BOOL)isSpeechRequest;
- (id)initWithTimestamp:(unsigned long long)a0;
- (void)encodeWithCoder:(id)a0;

@end
