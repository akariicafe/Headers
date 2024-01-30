@class NSString;

@interface STCallingStatusDomainCallDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long callType;
@property (readonly, nonatomic) unsigned long long callState;
@property (readonly, nonatomic) unsigned long long copresenceActivityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoCallDescriptorWithState:(unsigned long long)a0;
+ (id)copresenceCallDescriptorWithActivityType:(unsigned long long)a0;
+ (id)audioCallDescriptorWithState:(unsigned long long)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCallType:(unsigned long long)a0 callState:(unsigned long long)a1 copresenceActivityType:(unsigned long long)a2;

@end
