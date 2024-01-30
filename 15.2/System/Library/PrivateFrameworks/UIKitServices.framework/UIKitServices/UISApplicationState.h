@class NSString, UISApplicationStateClient, NSDate;

@interface UISApplicationState : NSObject {
    NSString *_bundleIdentifier;
    UISApplicationStateClient *_client;
}

@property (nonatomic, setter=_setUsesBackgroundNetwork:) BOOL _usesBackgroundNetwork;
@property (nonatomic, setter=_setNextWakeDate:) NSDate *_nextWakeDate;
@property (copy, nonatomic) id badgeValue;

- (id)initWithBundleIdentifier:(id)a0;
- (id)initForCurrentApplication;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setMinimumBackgroundFetchInterval:(double)a0;

@end
