@interface SUCoreCodeCoverage : NSObject

+ (void)_handleSignal:(int)a0 forName:(id)a1;
+ (void)dumpCodeCoverageForName:(id)a0;
+ (id)getCodeCoveragePathForName:(id)a0;
+ (void)initializeForName:(id)a0;
+ (void)resetCodeCoverageForName:(id)a0;

@end
