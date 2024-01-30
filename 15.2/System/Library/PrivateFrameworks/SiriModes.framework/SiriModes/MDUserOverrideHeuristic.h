@class NSUserDefaults;

@interface MDUserOverrideHeuristic : NSObject <MDModeHeuristic> {
    NSUserDefaults *_internalDefaults;
}

- (void).cxx_destruct;
- (id)init;
- (id)determineCurrentMode;
- (id)initWithInternalDefaults:(id)a0;
- (unsigned long long)internalModeOverride;

@end
