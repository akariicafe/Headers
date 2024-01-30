@class NSString, NSDictionary;

@interface SBBootDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSString *lastSystemBuildVersion;
@property (retain, nonatomic) NSString *lastRestoreIdentifier;
@property (nonatomic) BOOL hasCompletedSynchronizingCloudCriticalData;
@property (nonatomic) NSDictionary *bootTransitionContext;
@property (readonly, nonatomic) BOOL dontLockAfterCrash;
@property (readonly, nonatomic) BOOL recordBootTimeTillDidFinishLaunching;

- (void)_bindAndRegisterDefaults;

@end
