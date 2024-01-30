@class NSSet, NSString;

@interface CEMDeviceActivationLockBypassCodeCommand_Status : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;
@property (class, readonly, copy) NSSet *allowedReasons;

@property (copy, nonatomic) NSString *statusActivationLockBypassCode;

+ (id)buildRequiredOnlyWithActivationLockBypassCode:(id)a0;
+ (id)buildWithActivationLockBypassCode:(id)a0;

- (void).cxx_destruct;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
