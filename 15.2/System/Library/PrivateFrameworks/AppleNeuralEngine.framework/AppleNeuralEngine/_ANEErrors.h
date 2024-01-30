@interface _ANEErrors : NSObject

+ (id)createErrorWithCode:(long long)a0 description:(id)a1;
+ (id)programInferenceOverflowErrorForMethod:(id)a0;
+ (id)programInferenceOtherErrorForMethod:(id)a0;
+ (id)entitlementErrorForMethod:(id)a0;
+ (id)priorityErrorForMethod:(id)a0;
+ (id)fileAccessErrorForMethod:(id)a0;
+ (id)timeoutErrorForMethod:(id)a0;
+ (id)programCreationErrorForMethod:(id)a0;
+ (id)programLoadErrorForMethod:(id)a0;
+ (id)programLoadErrorForMethod:(id)a0 code:(long long)a1;
+ (id)missingCodeSigningErrorForMethod:(id)a0;
+ (id)invalidModelErrorForMethod:(id)a0;
+ (id)invalidModelKeyErrorForMethod:(id)a0;
+ (id)systemModelPurgeNotAllowedForMethod:(id)a0;

@end
