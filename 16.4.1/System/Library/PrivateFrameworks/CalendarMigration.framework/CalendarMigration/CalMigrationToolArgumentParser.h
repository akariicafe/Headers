@interface CalMigrationToolArgumentParser : NSObject

+ (void)_appendToArguments:(id)a0 ifNeededForTriStateOption:(long long)a1 forceEnableArgument:(id)a2 forceDisableArgument:(id)a3;
+ (unsigned long long)_argumentFromCommandLineArgument:(id)a0;
+ (id)_argumentParseErrorWithCode:(unsigned long long)a0 argument:(id)a1;
+ (id)commandLineArgumentsForToolOptions:(id)a0;
+ (id)parseOptionsFromCommandLineArguments:(id)a0 printUsage:(BOOL *)a1 error:(id *)a2;
+ (id)usageStringWithToolPath:(id)a0 parseError:(id)a1;

@end
