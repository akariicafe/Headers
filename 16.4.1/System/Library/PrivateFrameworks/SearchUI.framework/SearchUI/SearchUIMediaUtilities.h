@interface SearchUIMediaUtilities : NSObject

+ (id)applicationNameForBundleIdentifier:(id)a0;
+ (id)appsThatSupportSearchIntents;
+ (BOOL)bundleIdentifierSupportsOpenIntent:(id)a0;
+ (BOOL)bundleIdentifierSupportsPlayIntent:(id)a0;
+ (id)cardSectionsForListenToCardSection:(id)a0;
+ (id)fallbackPunchoutWithMetadata:(id)a0 forBundleIdentifier:(id)a1;
+ (id)generateAppsThatSupportSearchIntents;
+ (void)initializeQueuesAndNotifications;
+ (id)mediaSearchForMetadata:(id)a0;
+ (void)predictionForMediaMetadata:(id)a0 completion:(id /* block */)a1;
+ (void)prewarmMediaLibrary;
+ (void)resetMediaApps;
+ (id)supportedIntentsForApp:(id)a0;

@end
