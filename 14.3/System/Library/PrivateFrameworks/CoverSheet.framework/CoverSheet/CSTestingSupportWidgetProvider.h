@class NSString, WGWidgetDiscoveryController;

@interface CSTestingSupportWidgetProvider : NSObject <WGWidgetDiscoveryControllerDelegate, CSWidgetGroupViewControllerProviding> {
    WGWidgetDiscoveryController *_widgetDiscoveryController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
