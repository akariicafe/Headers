@class NSSet, NSString, BKSHIDEventDeferringToken, BKSHIDEventDeferringEnvironment;

@interface BKSHIDEventKeyCommandsRegistration : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) BKSHIDEventDeferringEnvironment *deferringEnvironment;
@property (readonly, copy, nonatomic) BKSHIDEventDeferringToken *deferringToken;
@property (readonly, copy, nonatomic) NSSet *keyCommands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)_initWithEnvironment:(id)a0 token:(id)a1 keyCommands:(id)a2;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
