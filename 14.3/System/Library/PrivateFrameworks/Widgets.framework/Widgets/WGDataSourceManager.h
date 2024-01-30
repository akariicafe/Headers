@class NSString, NSMutableDictionary, WGWidgetDataSourceManager;

@interface WGDataSourceManager : NSObject <_WGParentDataSourceManager> {
    BOOL _didBegin;
    NSMutableDictionary *_identifiersToWidgetChangeHandlers;
    WGWidgetDataSourceManager *_widgetDataSourceManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestSharedDataSourceManager:(id /* block */)a0;
+ (id)__sharedInstance;

- (void).cxx_destruct;
- (void)_begin:(id /* block */)a0;
- (void)_stop:(id /* block */)a0;
- (void)childDataSourceManagerDataSourcesDidChange:(id)a0;
- (void)_start:(id /* block */)a0;
- (id)discoverAvailableWidgetsWithError:(id *)a0;
- (void)addWidgetDataSourceChangeHandler:(id /* block */)a0 forIdentifier:(id)a1;
- (void)removeChangeHandlersWithIdentifier:(id)a0;

@end
