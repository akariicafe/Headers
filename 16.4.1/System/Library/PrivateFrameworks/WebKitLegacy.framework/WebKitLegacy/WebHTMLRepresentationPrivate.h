@class WebDataSource, WAKView;
@protocol WebPluginManualLoader;

@interface WebHTMLRepresentationPrivate : NSObject {
    WebDataSource *dataSource;
    BOOL hasSentResponseToPlugin;
    BOOL includedInWebKitStatistics;
    id<WebPluginManualLoader> manualLoader;
    WAKView *pluginView;
}

@end
