@class NSNumber, SAPersonAttribute;

@interface SAPhoneCall : SADomainCommand

@property (retain, nonatomic) SAPersonAttribute *callRecipient;
@property (copy, nonatomic) NSNumber *emergencyCall;
@property (nonatomic) BOOL faceTime;
@property (nonatomic) BOOL faceTimeAudio;
@property (nonatomic) BOOL handsFreeCall;
@property (nonatomic) BOOL speakerphoneCall;

+ (id)call;
+ (id)callWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
