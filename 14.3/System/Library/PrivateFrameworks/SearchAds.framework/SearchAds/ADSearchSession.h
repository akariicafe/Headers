@class NSString, ADCapService, ADParameterFactory, APOdmlSettings, NSObject;
@protocol OS_dispatch_queue;

@interface ADSearchSession : NSObject {
    NSObject<OS_dispatch_queue> *_idNotificationQueue;
}

@property (retain, nonatomic) ADCapService *capService;
@property (retain, nonatomic) ADParameterFactory *parameterFactory;
@property (retain, nonatomic) NSString *campaignNamespace;
@property (retain, nonatomic) NSObject *notificationObserver;
@property (nonatomic) BOOL notificationReceivedAndWaiting;
@property (retain, nonatomic) NSString *clientRequestID;
@property (retain, nonatomic) APOdmlSettings *odmlSettings;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) int appsRank;

- (void)searchObjectForCriteria:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateClickData:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)startUpdatingIDs;
- (id)adParameters;
- (void)dealloc;
- (void)requestSearchObjectForLocality:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)userTargetingProperties;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2;
- (id)sponsoredSearchRequestForLanguageLocale:(id)a0;
- (void)updateClickDataWith:(id)a0;
- (void)updateToroDownloadData:(id)a0 forType:(long long)a1;
- (id)populateStoreFrontLanguageLocale:(id)a0;
- (void)requestSponsoredSearchURL:(id /* block */)a0;
- (void)requestUserTargetingIdentifier:(id /* block */)a0;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateFrequencyCapData:(id)a0;
- (id)campaignNamespaceParameter;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2 storeFront:(id)a3;

@end
