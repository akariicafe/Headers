@interface APRequirements : NSObject

@property (class) unsigned long long failForRequirements;

+ (BOOL)_buildErrorWithCode:(long long)a0 message:(id)a1 returningError:(id *)a2;
+ (BOOL)_testForFileSystemReturningError:(id *)a0;
+ (BOOL)hasRequirements:(unsigned long long)a0 error:(id *)a1;

@end
