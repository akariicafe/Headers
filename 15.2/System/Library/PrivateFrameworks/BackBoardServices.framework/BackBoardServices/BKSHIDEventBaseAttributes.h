@class NSString, BKSHIDEventAuthenticationMessage, BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable>

@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) int source;
@property (nonatomic) unsigned short options;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseAttributesFromResolution:(id)a0;
+ (id)protobufSchema;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (void)appendDescriptionToFormatter:(id)a0;

@end
