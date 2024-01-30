@class NSString;

@interface MTSleepModeManager : NSObject <MTSleepModeManager> {
    BOOL _enabled;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL isEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
