@class NSSet, NSNumber, NSString;

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSNumber *statusAllowed;
@property (copy, nonatomic) NSString *statusBundleID;
@property (copy, nonatomic) NSString *statusName;

+ (id)buildRequiredOnly;
+ (id)buildWithAllowed:(id)a0 withBundleID:(id)a1 withName:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
