@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;
@property (readonly, nonatomic) NSArray *premiumStubs;

+ (id)daemonOfferStubsDictionarySample;
+ (id)persistenceKey;

- (id)chooseBuddyStubForConditions:(id)a0;
- (id)chooseBuddyStub;
- (void)_initServerStubsFromServerDictionary;
- (id)chooseFirstDefaultStub;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;
- (id)chooseDefaultStub;
- (id)chooseStubForOfferType:(long long)a0;
- (id)chooseStub;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (void).cxx_destruct;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)chooseStubForConditions:(id)a0;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (void)setServerDictionary:(id)a0;
- (id)sortedServerStubs:(id)a0;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (id)chooseFirstPremiumStub;
- (id)choosePremiumStubForConditions:(id)a0;
- (id)chooseFirstStub;
- (id)choosePremiumStub;

@end
