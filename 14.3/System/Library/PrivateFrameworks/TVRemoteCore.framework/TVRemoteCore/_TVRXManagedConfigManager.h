@class NSString;

@interface _TVRXManagedConfigManager : NSObject <MCProfileConnectionObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)refreshState;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;
- (BOOL)managedConfigProfileInstalled;

@end
