@class NSString, AMSBagKeySet, NSURL, AMSProcessInfo, NSNumber;
@protocol AMSBagProtocol;

@interface AMSClipMediaTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (retain, nonatomic) id<AMSBagProtocol> bag;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSNumber *externalVersionID;
@property (retain, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createBagForSubProfile;

- (id)_componentsPromise;
- (id)_performNetworkLookup;
- (id)_performJourneysLookup;
- (id)initWithClientID:(id)a0 bundleID:(id)a1 URL:(id)a2 bag:(id)a3;
- (void).cxx_destruct;
- (id)perform;

@end
