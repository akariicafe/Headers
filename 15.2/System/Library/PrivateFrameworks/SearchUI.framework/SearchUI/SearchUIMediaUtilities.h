@interface SearchUIMediaUtilities : NSObject

+ (id)cardSectionsForListenToCardSection:(id)a0;
+ (id)applicationNameForBundleIdentifier:(id)a0;
+ (void)predictionForMediaMetadata:(id)a0 completion:(id /* block */)a1;
+ (id)fallbackPunchoutWithMetadata:(id)a0 forBundleIdentifier:(id)a1;
+ (id)mediaSearchForMetadata:(id)a0;
+ (id)supportedIntentsForApp:(id)a0;
+ (id)appsThatSupportSearchIntents;
+ (void)resetMediaApps;
+ (void)initializeQueuesAndNotifications;
+ (id)generateAppsThatSupportSearchIntents;
+ (BOOL)bundleIdentifierSupportsPlayIntent:(id)a0;
+ (BOOL)bundleIdentifierSupportsOpenIntent:(id)a0;
+ (void)prewarmMediaLibrary;

@end
