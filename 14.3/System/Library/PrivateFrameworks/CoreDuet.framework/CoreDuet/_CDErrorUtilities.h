@interface _CDErrorUtilities : NSObject

+ (id)transformErrorForNSSecureCoding:(id)a0;
+ (BOOL)isCoreDataTemporaryError:(id)a0;
+ (BOOL)isCoreDataFatalError:(id)a0;
+ (void)simulateCrashWithDescription:(id)a0;

@end
