@class NSString, VSPreferences, VSUserAccountRegistry;

@interface VSUserAccountService : VSServiceListener <VSUserAccountRegistryDelegate>

@property (retain, nonatomic) VSPreferences *preferences;
@property (retain, nonatomic) VSUserAccountRegistry *registry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
