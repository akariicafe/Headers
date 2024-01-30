@class NSObject, NSString, NSMapTable, TUCallProviderManager, CoreTelephonyClient, CNContactsEnvironment;
@protocol OS_dispatch_queue;

@interface CNGeminiManager : NSObject <CoreTelephonyClientDelegate, TUCallProviderManagerDelegate> {
    CNContactsEnvironment *_environment;
    CoreTelephonyClient *_coreTelephonyClient;
    TUCallProviderManager *_callProviderManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_delegateToQueue;
}

@property (nonatomic) unsigned long long dataSourceExclusions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)descriptorForRequiredKeys;
+ (BOOL)deviceSupportsGemini;
+ (id)channelStringFromSenderIdentity:(id)a0;

- (void)addDelegate:(id)a0 queue:(id)a1;
- (void)subscriptionInfoDidChange;
- (void)removeDelegate:(id)a0;
- (id)bestSenderIdentityForFavoritesEntry:(id)a0 error:(id *)a1;
- (id)remoteGeminiResultForContact:(id)a0 substituteDefaultForDangling:(BOOL)a1 error:(id *)a2;
- (id)init;
- (void).cxx_destruct;
- (id)bestSenderIdentityForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)remoteBestSenderIdentityForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (BOOL)isReferencedByContactsForSenderLabelIdentifier:(id)a0 store:(id)a1;
- (void)danglingPlansDidUpdate:(id)a0;
- (id)badgeLabelForSubscription:(id)a0 error:(id *)a1;
- (id)initWithEnvironment:(id)a0 coreTelephonyClient:(id)a1 callProviderManager:(id)a2;
- (id)badgeLabelForSenderIdentity:(id)a0 error:(id *)a1;
- (id)bestSenderIdentityForContact:(id)a0 error:(id *)a1;
- (void)providersChangedForProviderManager:(id)a0;
- (id)fetchedSenderIdentitiesWithError:(id *)a0;
- (id)bestSubscriptionForContact:(id)a0 error:(id *)a1;
- (id)bestSubscriptionForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)channelForFavoritesEntry:(id)a0 error:(id *)a1;
- (BOOL)remapContactsHavingPreferredChannelIdentifier:(id)a0 toPreferredChannelIdentifier:(id)a1 contactStore:(id)a2 error:(id *)a3;
- (id)geminiResultForHandle:(id)a0 contactStore:(id)a1 error:(id *)a2;
- (id)geminiResultForContact:(id)a0 error:(id *)a1;
- (id)initWithCallProviderManager:(id)a0;
- (BOOL)remapChannelIdentifier:(id)a0 toIdentifier:(id)a1 error:(id *)a2;
- (id)channelForContact:(id)a0 error:(id *)a1;
- (id)geminiResultForContact:(id)a0 substituteDefaultForDangling:(BOOL)a1 error:(id *)a2;

@end
