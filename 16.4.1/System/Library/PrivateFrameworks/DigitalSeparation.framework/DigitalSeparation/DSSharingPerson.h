@class NSString, NSArray, CNContact, NSMutableDictionary, NSMutableSet, NSMapTable;

@interface DSSharingPerson : NSObject {
    CNContact *_contact;
    NSMutableDictionary *_sources;
    NSMutableDictionary *_participantsBySource;
    NSMutableDictionary *_sharedResourcesBySource;
    NSString *_identifier;
    NSMutableSet *_emailAddresses;
    NSMutableSet *_names;
    NSMutableSet *_phoneNumbers;
    NSMutableDictionary *_shareDirectionBySourceName;
    NSMapTable *_shareDirectionByResource;
}

@property (readonly, nonatomic) long long score;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *displayGivenName;
@property (readonly, copy, nonatomic) NSString *localizedDetail;
@property (readonly, copy, nonatomic) NSArray *sortedSourceNames;
@property (readonly, copy, nonatomic) NSArray *allSources;
@property (readonly, nonatomic) CNContact *contact;

+ (void)initialize;

- (void)removeSource:(id)a0;
- (id)valueForKey:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)sharedResourcesForSourceName:(id)a0;
- (void)stopAllSharingOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)stopSharingSourceNames:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)addSource:(id)a0 sharedResource:(id)a1 participant:(id)a2 deviceOwnerRole:(long long)a3;
- (id)contactMatchingPredicates:(id)a0;
- (id)initWithSource:(id)a0 sharedResource:(id)a1 participant:(id)a2 deviceOwnerRole:(long long)a3;
- (BOOL)isMe:(id)a0;
- (void)removeParticipant:(id)a0 fromSource:(id)a1;
- (unsigned long long)shareDirectionForSharedResource:(id)a0;
- (unsigned long long)shareDirectionForSourceName:(id)a0;
- (void)stopSharingSources:(id)a0 queue:(id)a1 completion:(id /* block */)a2;
- (void)updateContactFromParticipant:(id)a0;
- (void)updateKnownEmailAddressesForParticipant:(id)a0;
- (void)updateKnownNameForParticipant:(id)a0;
- (void)updateKnownPhoneNumbersForParticipant:(id)a0;
- (void)updateShareDirectionForParticipant:(id)a0 source:(id)a1 sharedResource:(id)a2 deviceOwnerRole:(long long)a3;

@end
