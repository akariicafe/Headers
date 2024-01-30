@class NSString, NSArray, WGWidgetDataSource, WGWidgetVisibilityManager;
@protocol _WGParentDataSourceManager;

@interface WGWidgetDataSourceManager : NSObject <WGWidgetVisibilityDelegate, _WGDataSourceManager> {
    WGWidgetDataSource *_widgetDataSource;
    BOOL _isPublishing;
    id /* block */ _didStartBlock;
}

@property (retain, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken;
@property (retain, nonatomic, getter=_widgetVisbilityManager) WGWidgetVisibilityManager *widgetVisbilityManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<_WGParentDataSourceManager> parentDataSourceManager;
@property (readonly, nonatomic) NSArray *dataSources;

+ (id)discoverAvailableWidgetsWithError:(id *)a0;
+ (id)_widgetExtensionsDiscoveryAttributes;

- (id)init;
- (void).cxx_destruct;
- (void)_updateDataSourceWithExtension:(id)a0;
- (void)_stop:(id /* block */)a0;
- (void)widgetVisibilityDidChange;
- (void)_updatePublishedWidgetExtensions;
- (void)_updatePublishedWidgetExtensions:(id)a0;
- (void)_beginContinuousPlugInDiscovery;
- (void)_revokeExtensionWithIdentifier:(id)a0;
- (void)_endContinuousPlugInDiscovery;
- (void)_start:(id /* block */)a0;
- (BOOL)_shouldPublishWidgetExtension:(id)a0;

@end
