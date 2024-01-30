@class HDHAHealthAppPluginHostConnection;

@interface HDHAHealthPluginHostFeedGenerator : NSObject

@property (retain, nonatomic) HDHAHealthAppPluginHostConnection *connection;

- (void)handleJournaledSharingEntries:(id)a0;
- (void)runBackgroundGenerationForAllPlugins;
- (void)invalidateStoreCache;
- (void).cxx_destruct;
- (id)init;
- (void)runBackgroundGenerationForPluginIdentifiers:(id)a0 commitUrgentTransaction:(BOOL)a1 feedItemsOnly:(BOOL)a2;
- (id)healthAppPluginHost;
- (id)synchronousHealthAppPluginHost;

@end
