@class NSMutableArray, NSMutableDictionary;

@interface _MultiplatformDonationRecencyStore : NSObject {
    NSMutableArray *_appDateInfo;
    NSMutableDictionary *_infoByLocalID;
    NSMutableDictionary *_infoByRemoteID;
}

- (id)init;
- (void).cxx_destruct;
- (void)updateDataWithRemoteBundleIdentifier:(id)a0 remoteDate:(id)a1 localBundleIdentifier:(id)a2 localDate:(id)a3;
- (id)bundlesFromMostRecentlyProvidingPlatforms;

@end
