@class NSString, STAttributedEntity;

@interface STActivityAttribution : NSObject <BSDebugDescriptionProviding, NSSecureCoding, BSDescriptionProviding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) STAttributedEntity *attributedEntity;
@property (readonly, copy, nonatomic) STAttributedEntity *activeEntity;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)attributionWithPID:(int)a0;

- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)succinctDescriptionBuilder;
- (id)initWithCoder:(id)a0;
- (id)debugDescriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithAttributedEntity:(id)a0;
- (id)initWithPID:(int)a0;
- (void).cxx_destruct;
- (id)initWithAttributedEntity:(id)a0 activeEntity:(id)a1;

@end
