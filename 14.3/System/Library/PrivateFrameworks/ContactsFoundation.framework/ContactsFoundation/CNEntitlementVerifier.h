@class NSString;

@interface CNEntitlementVerifier : NSObject <CNEntitlementVerification>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)currentProcessHasBooleanEntitlement:(id)a0 error:(id *)a1;
+ (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 isFirstOrSecondPartyWithError:(id *)a1;
+ (BOOL)secTask:(struct __SecTask { } *)a0 hasBooleanEntitlement:(id)a1 error:(id *)a2;
+ (BOOL)auditToken:(struct { unsigned int x0[8]; })a0 hasBooleanEntitlement:(id)a1 error:(id *)a2;


@end
