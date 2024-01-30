@class HDHAHealthAppPluginHostConnection;

@interface HDHAHealthPluginHostFeedGenerator : NSObject

@property (retain, nonatomic) HDHAHealthAppPluginHostConnection *connection;

- (void)handleJournaledSharingEntries:(id)a0;
- (id)healthAppPluginHost;
- (void)runBackgroundGenerationForAllPlugins;
- (id)init;
- (void)invalidateStoreCache;
- (void)runBackgroundGenerationForPluginIdentifiers:(id)a0 commitUrgentTransaction:(BOOL)a1 feedItemsOnly:(BOOL)a2;
- (void).cxx_destruct;
- (id)synchronousHealthAppPluginHost;

@end
