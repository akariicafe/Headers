@class NSData, NSString;

@interface SACreateAssistant : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *activationToken;
@property (copy, nonatomic) NSString *appleConnectServiceTicket;
@property (copy, nonatomic) NSString *appleConnectSessionToken;
@property (copy, nonatomic) NSString *connectionMode;
@property (copy, nonatomic) NSString *connectionType;
@property (copy, nonatomic) NSString *language;
@property (copy, nonatomic) NSString *linkedAssistantId;
@property (copy, nonatomic) NSString *linkedSpeechId;
@property (copy, nonatomic) NSData *linkedValidationData;
@property (copy, nonatomic) NSString *speechId;
@property (copy, nonatomic) NSData *validationData;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createAssistant;
+ (id)createAssistantWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
