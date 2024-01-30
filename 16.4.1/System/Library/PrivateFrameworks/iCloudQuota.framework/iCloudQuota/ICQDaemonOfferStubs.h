@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;

+ (id)persistenceKey;
+ (id)daemonOfferStubsDictionarySample;

- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (void)_initServerStubsFromServerDictionary;
- (id)chooseFirstDefaultStub;
- (id)chooseBuddyStub;
- (id)chooseStubForConditions:(id)a0;
- (BOOL)_stubsArrayContainsOfferID:(id)a0 stubs:(id)a1;
- (id)chooseBuddyStubForConditions:(id)a0;
- (id)choosePremiumStub;
- (id)chooseFirstStub;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (void)setServerDictionary:(id)a0;
- (id)sortedServerStubs:(id)a0;
- (id)chooseDefaultStubForConditions:(id)a0;
- (BOOL)containsOfferID:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (id)choosePremiumStubForConditions:(id)a0;
- (id)chooseDefaultStub;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (void).cxx_destruct;
- (id)chooseStub;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)chooseFirstPremiumStub;
- (id)chooseStubForOfferType:(long long)a0;

@end
