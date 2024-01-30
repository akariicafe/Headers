@class PARBag, NSString, NSArray, NSSet, NSMutableDictionary, GEOUserSessionEntity, NSObject, SSPlistDataReader, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_group, PRSSessionController;

@interface PRSBagHandler : NSObject {
    BOOL _waitingForLocation;
    NSObject<OS_dispatch_group> *_locationGroup;
    id _lockObject;
    NSMutableArray *_tasks;
    PARBag *_bag;
    NSObject<OS_dispatch_queue> *_bagQueue;
}

@property (nonatomic) long long status;
@property (retain, nonatomic) NSMutableDictionary *resourceMetadata;
@property (nonatomic) BOOL resourceMetadataNeedsWrite;
@property (retain, nonatomic) NSString *resourceMetadataPath;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *resourceFetchQueue;
@property (weak) id<PRSSessionController> client;
@property (nonatomic) BOOL active;
@property double searchRenderTimeout;
@property double suggestionsRenderTimeout;
@property (retain) SSPlistDataReader *cep_server_values;
@property (retain, nonatomic) NSSet *appBlocklist;
@property (retain, nonatomic) NSArray *enabledDomains;
@property (nonatomic) BOOL disableAsTypedSuggestion;
@property (nonatomic) BOOL collectAnonymousData;
@property (nonatomic) BOOL collectScores;
@property (retain, nonatomic) NSArray *anonymousMetadataUndesiredBundleIDs;
@property (nonatomic) BOOL use2LayerRanking;
@property (retain, nonatomic) NSString *fteLocString;
@property (retain, nonatomic) NSString *fteLearnMoreString;
@property (retain, nonatomic) NSString *fteContinueString;
@property (retain, nonatomic) NSArray *suggestionRankerModelParams;
@property (readonly, nonatomic) NSString *lookupFirstUseDescription1;
@property (readonly, nonatomic) NSString *lookupFirstUseDescription2;
@property (readonly, nonatomic) NSString *lookupFirstUseLearnMore;
@property (readonly, nonatomic, getter=isBagEnabled) BOOL bagEnabled;
@property (readonly) GEOUserSessionEntity *geoUserSessionEntity;

+ (void)initialize;
+ (id)sharedHandler;

- (id)userId;
- (void)getFTEStringsWithReply:(id /* block */)a0;
- (id)supportedServices;
- (void)removeTask:(id)a0;
- (void)_processQIFeatures:(id)a0 forClient:(id)a1;
- (BOOL)isEnabled;
- (void)updateWithBagDictionary:(id)a0 error:(id)a1;
- (BOOL)searchSupported:(BOOL)a0;
- (void)fetchModifiedResourceFromSession:(id)a0 resource:(id)a1 completion:(id /* block */)a2;
- (BOOL)isLocaleSupported:(id)a0;
- (void)updateFromSession:(id)a0 bag:(id)a1 forClient:(id)a2 error:(id)a3;
- (id)applicationNameForUserAgent;
- (void).cxx_destruct;
- (void)activate;
- (id)init;
- (id)excludedDomainIdentifiers;
- (id)_base64CEPDataNoCopyFromFeatureData:(id)a0;
- (void)deactivate;
- (void)parseCEPFromData:(id)a0 forClient:(id)a1;
- (BOOL)sessionReady;
- (void)refreshGUID;
- (void)triggerTaskWhenReady:(id)a0;

@end
