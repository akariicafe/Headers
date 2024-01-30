@interface LAErrorHelper : NSObject

+ (id)localizedStringForError:(long long)a0;
+ (id)errorWithCode:(long long)a0 withUnderlyingErrors:(id)a1;
+ (BOOL)storageError:(id)a0 hasCode:(long long)a1;
+ (BOOL)error:(id)a0 hasCode:(long long)a1;
+ (id)errorWithCode:(long long)a0 userInfo:(id)a1;
+ (id)errorPlatformDoesNotSupportAction:(id)a0;
+ (id)silentInternalErrorWithMessage:(id)a0;
+ (void)raiseExceptionOnError:(id)a0;
+ (id)internalErrorWithMessage:(id)a0;
+ (id)storageErrorWithCode:(long long)a0 message:(id)a1;
+ (id)errorWithCode:(long long)a0;
+ (BOOL)error:(id)a0 hasCodeFromArray:(id)a1;
+ (id)internalErrorWithMessage:(id)a0 suberror:(id)a1;
+ (id)errorWithCode:(long long)a0 message:(id)a1 suberror:(id)a2;
+ (id)_errorNotSupportedAction:(id)a0 on:(id)a1;
+ (id)errorNotSupported;
+ (id)errorDeviceDoesNotSupportAction:(id)a0;
+ (id)parameterErrorWithMessage:(id)a0;
+ (BOOL)error:(id)a0 hasCode:(long long)a1 subcode:(long long)a2;
+ (id)redactInternalError:(id)a0;
+ (id)missingEntitlementError:(id)a0;
+ (id)errorWithCode:(long long)a0 subcode:(long long)a1 message:(id)a2;
+ (id)errorWithCode:(long long)a0 message:(id)a1 moreInfo:(id)a2;
+ (id)errorWithCode:(long long)a0 message:(id)a1;
+ (id)xctErrorWithMessage:(id)a0 suberror:(id)a1;
+ (id)parameterErrorForMissingOrInvalidObject:(id)a0 name:(const char *)a1;
+ (id)storageErrorWithCode:(long long)a0 message:(id)a1 suberror:(id)a2;

@end
