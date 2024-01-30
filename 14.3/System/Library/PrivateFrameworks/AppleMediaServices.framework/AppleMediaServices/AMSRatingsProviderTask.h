@class AMSBagKeySet, NSString;
@protocol AMSBagProtocol;

@interface AMSRatingsProviderTask : AMSTask <AMSBagConsumer>

@property (class, readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (class, readonly, nonatomic) NSString *bagSubProfile;
@property (class, readonly, nonatomic) NSString *bagSubProfileVersion;

@property (readonly, nonatomic) unsigned long long mediaType;
@property (readonly, nonatomic) NSString *storeFront;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)addRequiredBagKeysToAggregator:(id)a0;
+ (id)createBagForSubProfile;
+ (id)ratingWithValue:(id)a0 mediaType:(unsigned long long)a1 storeFront:(id)a2 clientIdentifier:(id)a3 bag:(id)a4;

- (void).cxx_destruct;
- (id)_urlForMediaType:(unsigned long long)a0;
- (id)initWithMediaType:(unsigned long long)a0 storeFront:(id)a1 clientIdentifier:(id)a2 bag:(id)a3;
- (id)performTask;
- (id)_queryItems;

@end
