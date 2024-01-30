@interface MOVStreamOptions : NSObject {
    BOOL _debugMode;
}

@property (class, readonly) MOVStreamOptions *sharedOptions;

@property (readonly) BOOL disableFrameReordering;
@property (readonly) double bitrateMultiplier;
@property (readonly) unsigned long long bitrateOverride;
@property (readonly) BOOL forceColorLossless;
@property (readonly) BOOL force10bitMonoByVT;
@property (readonly) BOOL forceLossless8bitMonoByVT;
@property (readonly) BOOL skipSourceHint;

- (id)init;
- (id)localDefaults;
- (id)currentOptions;
- (void)checkBossMode;
- (void)checkHasValue:(id)a0 changedForKey:(id)a1;
- (void)registerStandardDefaults;
- (id)standardDefaultValues;

@end
