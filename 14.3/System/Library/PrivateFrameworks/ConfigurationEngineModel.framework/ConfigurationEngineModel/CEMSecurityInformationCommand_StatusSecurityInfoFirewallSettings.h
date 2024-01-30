@class NSSet, NSNumber, NSArray;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSNumber *statusFirewallEnabled;
@property (copy, nonatomic) NSNumber *statusBlockAllIncoming;
@property (copy, nonatomic) NSNumber *statusStealthMode;
@property (copy, nonatomic) NSArray *statusApplications;

+ (id)buildRequiredOnly;
+ (id)buildWithFirewallEnabled:(id)a0 withBlockAllIncoming:(id)a1 withStealthMode:(id)a2 withApplications:(id)a3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
