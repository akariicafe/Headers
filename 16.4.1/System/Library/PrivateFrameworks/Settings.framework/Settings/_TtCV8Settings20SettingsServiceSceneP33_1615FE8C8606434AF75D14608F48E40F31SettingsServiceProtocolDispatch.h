@protocol _TtP8Settings27SettingsHostServiceProvider_;

@interface _TtCV8Settings20SettingsServiceSceneP33_1615FE8C8606434AF75D14608F48E40F31SettingsServiceProtocolDispatch : _TtCs12_SwiftObject <Settings.SettingsServiceProtocol> {
    void /* unknown type, empty encoding */ target;
}

@property (nonatomic, retain) id<_TtP8Settings27SettingsHostServiceProvider_> serviceHost;

- (void)openURL:(id)a0;
- (void)isAvailable:(id /* block */)a0;
- (void)filterSearchAnchorsForSidebarItem:(id)a0 suggestedAnchors:(id)a1 reply:(id /* block */)a2;
- (void)getSidebarItems:(id /* block */)a0;
- (void)getSidebarSections:(id /* block */)a0;

@end
