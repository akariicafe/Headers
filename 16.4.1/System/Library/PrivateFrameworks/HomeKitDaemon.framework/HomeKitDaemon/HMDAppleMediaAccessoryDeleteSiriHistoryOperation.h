@class NSString, AFSettingsConnection;

@interface HMDAppleMediaAccessoryDeleteSiriHistoryOperation : HMFOperation <HMFLogging>

@property (readonly) AFSettingsConnection *settingsConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)main;
- (id)initWithSettingsConnection:(id)a0;
- (void).cxx_destruct;

@end
