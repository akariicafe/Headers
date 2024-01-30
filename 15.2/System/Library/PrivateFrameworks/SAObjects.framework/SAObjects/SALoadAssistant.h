@class NSString, NSArray, NSData, NSNumber;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *appleConnectServiceTicket;
@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *assistantId;
@property (copy, nonatomic) NSString *connectionMode;
@property (copy, nonatomic) NSString *connectionType;
@property (copy, nonatomic) NSString *dataSharingOptInStatus;
@property (copy, nonatomic) NSNumber *deviceAuthVersion;
@property (copy, nonatomic) NSArray *experiments;
@property (copy, nonatomic) NSString *hubAssistantId;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *lastKnownAceHostOfCompanion;
@property (copy, nonatomic) NSString *linkedAssistantId;
@property (copy, nonatomic) NSData *linkedSessionValidationData;
@property (copy, nonatomic) NSString *linkedSpeechId;
@property (copy, nonatomic) NSString *loggableAssistantId;
@property (copy, nonatomic) NSString *loggableSharedUserId;
@property (copy, nonatomic) NSData *sessionValidationData;
@property (copy, nonatomic) NSString *sharedUserId;
@property (copy, nonatomic) NSString *speechId;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loadAssistant;
+ (id)loadAssistantWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
