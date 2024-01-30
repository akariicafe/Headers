@class BSAuditToken, NSString;

@interface STActivityAttribution : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int clientProvidedPID;
@property (readonly, copy, nonatomic) BSAuditToken *bsAuditToken;
@property (readonly, nonatomic) struct { unsigned int x0[8]; } auditToken;
@property (readonly, nonatomic) int pid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)attributionWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)attributionWithPID:(int)a0;

- (id)initWithBSAuditToken:(id)a0 clientProvidedPID:(int)a1;
- (id)initWithAuditToken:(struct { unsigned int x0[8]; })a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)initWithPID:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;

@end
