@class NSArray;

@interface ICQDaemonOfferStubs : ICQDaemonPersisted

@property (readonly, nonatomic) NSArray *serverStubs;
@property (readonly, nonatomic) NSArray *buddyStubs;
@property (readonly, nonatomic) NSArray *defaultStubs;

+ (id)daemonOfferStubsDictionarySample;
+ (id)persistenceKey;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;
- (id)chooseFirstStub;
- (id)chooseFirstDefaultStub;
- (id)_initWithAccount:(id)a0 error:(id)a1;
- (id)chooseBuddyStub;
- (id)chooseStub;
- (id)chooseBuddyStubForOfferType:(long long)a0;
- (id)chooseStubForOfferType:(long long)a0;
- (id)_chooseStubFromServerStubs:(id)a0 conditions:(id)a1;
- (void)_initServerStubsFromServerDictionary;
- (void)setServerDictionary:(id)a0;
- (BOOL)_isValidServerStubs:(id)a0 key:(id)a1;
- (id)sortedServerStubs:(id)a0;
- (id)chooseStubForConditions:(id)a0;
- (id)chooseBuddyStubForConditions:(id)a0;
- (id)chooseDefaultStub;
- (id)chooseDefaultStubForConditions:(id)a0;
- (id)_chooseStubFromServerStubs:(id)a0 offerType:(long long)a1;

@end
