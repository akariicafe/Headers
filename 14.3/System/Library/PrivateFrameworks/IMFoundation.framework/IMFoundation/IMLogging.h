@interface IMLogging : NSObject

+ (id)stringForDate;
+ (id)dateFormatter;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(BOOL)a3 simpleLogString:(id)a4 format:(id)a5 arguments:(char *)a6 time:(unsigned long long)a7;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(BOOL)a3 simpleLogString:(id)a4;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(BOOL)a3 simpleLogString:(id)a4 time:(unsigned long long)a5;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(BOOL)a3 format:(id)a4;
+ (BOOL)loggingEnabledForLevel:(int)a0;
+ (void)enableConsoleLoggingForLevel:(int)a0;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 insertProcessInfo:(BOOL)a3 format:(id)a4 arguments:(char *)a5;
+ (id)timeFormatter;
+ (id)logFileDirectory;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 format:(id)a3;
+ (void)logString:(id)a0 toFolder:(id)a1 toFileNamed:(id)a2;
+ (void)logAtLevel:(int)a0 type:(id)a1 category:(id)a2 format:(id)a3 arguments:(char *)a4;

@end
