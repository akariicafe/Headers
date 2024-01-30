@class NSString, BKSHIDEventAuthenticationMessage, BKSHIDEventDisplay, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventBaseAttributes : NSObject <BSDescriptionProviding, BSProtobufSerializable, NSCopying, BSDescriptionStreamable>

@property (retain, nonatomic) BKSHIDEventAuthenticationMessage *authenticationMessage;
@property (retain, nonatomic) BKSHIDEventDeferringEnvironment *environment;
@property (retain, nonatomic) BKSHIDEventDisplay *display;
@property (retain, nonatomic) BKSHIDEventDeferringToken *token;
@property (nonatomic) int source;
@property (nonatomic) unsigned short options;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)baseAttributesFromResolution:(id)a0;
+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;

@end
