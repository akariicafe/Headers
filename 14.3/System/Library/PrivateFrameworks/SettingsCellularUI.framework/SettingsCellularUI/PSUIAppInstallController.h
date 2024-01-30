@class NSURLSession, NSString, NSURL, PSUIAppDescription;

@interface PSUIAppInstallController : NSObject {
    NSURLSession *_session;
}

@property (retain) PSUIAppDescription *appDescription;
@property (retain) NSURL *installURL;
@property (retain, nonatomic) NSURL *moreAppsURL;
@property (readonly, nonatomic) NSString *appID;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly) int installState;

+ (id)lookupAppDescriptionForInstalledApp:(id)a0;
+ (id)loadIconFromURL:(id)a0 session:(id)a1;
+ (void)saveAppDescriptionToCache:(id)a0;
+ (void)lookupAppFromStore:(id)a0 completionHandler:(id /* block */)a1;
+ (id)tryLoadAppDescriptionFromCache;
+ (id)iconLocalCacheURLFromKey:(id)a0;

- (id)initWithBundleID:(id)a0;
- (void)load;
- (id)specifier;
- (void).cxx_destruct;
- (void)installButtonTapped:(id)a0;
- (id)initWithAppID:(id)a0 carrierMoreAppsURL:(id)a1;
- (BOOL)moreAppsAvailable;
- (void)moreAppsButtonTapped:(id)a0;

@end
