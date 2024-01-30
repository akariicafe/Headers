@class NSArray, NSString;

@interface ManagedConfigurationUtils : NSObject <MCProfileConnectionObserver> {
    void *_managedConfigurationDylibHandle;
}

@property (nonatomic) BOOL diagnosticsAndUsageEnabled;
@property (retain, nonatomic) NSArray *installedVisibleProfileIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)a0 userInfo:(id)a1;
- (void)profileConnectionDidReceiveProfileListChangedNotification:(id)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
