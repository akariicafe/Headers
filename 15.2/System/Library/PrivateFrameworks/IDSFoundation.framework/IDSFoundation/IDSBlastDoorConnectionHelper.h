@interface IDSBlastDoorConnectionHelper : NSObject

@property (retain, nonatomic) id idsBlastDoor;

+ (id)getBlastDoorSharedConnection;

- (BOOL)commandEnabledForBlastDoor:(id)a0 topic:(id)a1;
- (void)diffuseAPSUserPayload:(id)a0 topic:(id)a1 withCompletionBlock:(id /* block */)a2;
- (BOOL)removeAllowlistedKey:(id)a0 fromPayload:(id)a1;
- (void).cxx_destruct;
- (void)auditMissingHeaderKeys:(id)a0 target:(id)a1;
- (id)init;
- (void)addAllowlistedKey:(id)a0 toValidatedPayload:(id)a1 fromOriginalPayload:(id)a2;

@end
