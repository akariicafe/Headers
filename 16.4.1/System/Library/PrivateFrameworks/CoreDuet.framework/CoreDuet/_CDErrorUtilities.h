@interface _CDErrorUtilities : NSObject

+ (BOOL)isCoreDataTemporaryError:(id)a0;
+ (void)simulateCrashWithDescription:(id)a0;
+ (id)transformErrorForNSSecureCoding:(id)a0;
+ (BOOL)isCoreDataFatalError:(id)a0;

@end
