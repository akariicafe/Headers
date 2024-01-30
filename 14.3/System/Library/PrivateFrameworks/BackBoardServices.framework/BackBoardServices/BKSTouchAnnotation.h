@class NSString;

@interface BKSTouchAnnotation : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int touchIdentifier;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;

@end
