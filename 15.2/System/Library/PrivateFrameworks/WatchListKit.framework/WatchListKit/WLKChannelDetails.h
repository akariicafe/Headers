@class NSString, NSArray, NSURL, NSDictionary, WLKArtworkVariantListing;

@interface WLKChannelDetails : NSObject <WLKInstallable>

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *appBundleIDs;
@property (readonly, copy, nonatomic) NSArray *appAdamIDs;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (readonly, nonatomic) BOOL forceDSIDlessInstall;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appStoreURLString;
@property (readonly, copy, nonatomic) NSString *channelID;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *appAdamIDs;
@property (readonly, copy, nonatomic) NSArray *appBundleIDs;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, copy, nonatomic) NSURL *appStoreURL;
@property (readonly, nonatomic) WLKArtworkVariantListing *images;
@property (readonly, nonatomic, getter=isSubscribed) BOOL subscribed;
@property (readonly, nonatomic, getter=isiTunes) BOOL itunes;
@property (readonly, nonatomic, getter=isFirstParty) BOOL firstParty;
@property (readonly, nonatomic, getter=isWatchListEnabled) BOOL watchListEnabled;
@property (readonly, nonatomic, getter=isConsented) BOOL consented;
@property (readonly, nonatomic, getter=isApSubscription) BOOL apSubscription;
@property (readonly, nonatomic) NSDictionary *rateLimit;
@property (readonly, nonatomic) BOOL shouldTrackPlayActivity;
@property (readonly, nonatomic) unsigned long long channelType;
@property (readonly, nonatomic) NSString *minRequiredAppVersion;
@property (readonly, nonatomic, getter=isAppInstalled) BOOL appInstalled;

+ (void)sui_fetchSeasonTitlesSettingWithCompletionHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;
- (id)sui_channelName;
- (id)sui_seasonEpisodeLabel:(BOOL)a0 seasonTitleAvailable:(BOOL)a1 seasonNumber:(id)a2 episodeNumber:(id)a3;
- (id)appIconURLForSize:(struct CGSize { double x0; double x1; })a0;

@end
