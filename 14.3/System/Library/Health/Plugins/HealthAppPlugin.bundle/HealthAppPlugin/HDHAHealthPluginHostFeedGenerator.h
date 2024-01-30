@class NSXPCConnection;

@interface HDHAHealthPluginHostFeedGenerator : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (id)init;
- (void).cxx_destruct;
- (void)runBackgroundGenerationForAllPlugins;
- (void)dealloc;
- (id)healthAppPluginHost;
- (void)runBackgroundGenerationForPluginIdentifiers:(id)a0;

@end
