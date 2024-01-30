@class NSString;

@interface STDynamicActivityAttribution : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *localizationKey;
@property (readonly, copy, nonatomic) NSString *formattedString;
@property (readonly, nonatomic) struct { unsigned int val[8]; } clientAuditToken;
@property (readonly, copy, nonatomic) NSString *clientExecutablePath;
@property (readonly, nonatomic) struct { unsigned int val[8]; } maskingClientAuditToken;
@property (readonly, copy, nonatomic) NSString *maskingClientExecutablePath;

+ (id)attributionForClientAuditToken:(struct { unsigned int x0[8]; })a0 clientExecutablePath:(id)a1 stringWithFormat:(id)a2 maskingClientAuditToken:(struct { unsigned int x0[8]; })a3 maskingClientExecutablePath:(id)a4;
+ (id)attributionForClientAuditToken:(struct { unsigned int x0[8]; })a0 clientExecutablePath:(id)a1 bundleID:(id)a2 localizationKey:(id)a3;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithClientAuditToken:(struct { unsigned int x0[8]; })a0 clientExecutablePath:(id)a1;
- (id)succinctDescription;
- (id)description;
- (id)_initWithclientAuditToken:(struct { unsigned int x0[8]; })a0 clientExecutablePath:(id)a1 maskingClientAuditToken:(struct { unsigned int x0[8]; })a2 maskingClientExecutablePath:(id)a3;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;

@end
