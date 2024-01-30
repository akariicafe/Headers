@class NSString, HPSHomeAccessorySettingsInterface;

@interface HPSHomeAccessoryInterfaceMediator : NSObject <HPSHomeAccessorySettingsInterfaceDelegate>

@property (readonly, weak, nonatomic) HPSHomeAccessorySettingsInterface *settingsInterface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithInterface:(id)a0;
- (void).cxx_destruct;
- (void)homekitaccessoryDidUpdateValueForEndpointIdentifier:(id)a0 keyPath:(id)a1 value:(id)a2;

@end
