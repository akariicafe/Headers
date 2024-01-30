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
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *odmlQueue;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) NSString *appVersion;
@property (nonatomic) int appsRank;

- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2;
- (id)populateStoreFrontLanguageLocale:(id)a0;
- (void)searchObjectForCriteria:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)requestSponsoredSearchURL:(id /* block */)a0;
- (void)requestSponsoredSearchDataRoutingInfoAndRequestIDForLocality:(id)a0 withCompletionHandler:(id /* block */)a1;
- (id)userTargetingProperties;
- (id)adParameters;
- (id)sponsoredSearchRequestForLanguageLocale:(id)a0;
- (id)initWithAppID:(id)a0 appVersion:(id)a1 appsRank:(int)a2 storeFront:(id)a3;
- (BOOL)startUpdatingIDs;
- (id)campaignNamespaceParameter;
- (void).cxx_destruct;
- (void)requestUserTargetingIdentifier:(id /* block */)a0;
- (void)_setODMLProperties:(id)a0;
- (void)dealloc;

@end
