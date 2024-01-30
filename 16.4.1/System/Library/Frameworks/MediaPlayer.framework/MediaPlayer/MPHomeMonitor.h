@class NSString;

@interface MPHomeMonitor : NSObject <MPHomeManagerObserverDelegate> {
    BOOL _soundCheckCachedValue;
}

@property (class, readonly, nonatomic) BOOL isCurrentDeviceValidHomeAccessory;
@property (class, readonly, nonatomic) MPHomeMonitor *sharedMonitor;

@property (nonatomic, getter=isSoundCheckEnabled) BOOL soundCheckEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupIfNecessary;

- (id)init;
- (void)_postNotificationWithName:(id)a0;
- (void)currentHomeDidChange;
- (void)currentUserDidChange;
- (void)homeUsersDidChange;
- (void)soundCheckSettingDidUpdate:(BOOL)a0;

@end
