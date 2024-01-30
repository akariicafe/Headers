@interface SOErrorHelper : NSObject

+ (id)errorWithCode:(long long)a0 message:(id)a1 suberror:(id)a2;
+ (id)deniedBundleIdentifier:(id)a0;
+ (BOOL)error:(id)a0 hasCode:(long long)a1 subcode:(long long)a2;
+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 message:(id)a2;
+ (void)raiseExceptionOnError:(id)a0;
+ (id)missingEntitlementError:(id)a0;
+ (id)errorWithCode:(long long)a0;
+ (id)doNotHandleBreakingRecursionWithCallerBundleIdentifier:(id)a0;
+ (id)internalErrorWithMessage:(id)a0;
+ (id)errorNotSupported;
+ (id)parameterErrorWithMessage:(id)a0;
+ (id)errorWithCode:(long long)a0 message:(id)a1 moreInfo:(id)a2;
+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)silentInternalErrorWithMessage:(id)a0;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)invalidURLError:(id)a0;

@end
