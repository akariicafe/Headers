@class NSMutableSet, NSData, NSNumber, NSUbiquitousKeyValueStore;

@interface CDFDonationFeedbackStore : NSObject {
    NSUbiquitousKeyValueStore *_kvs;
    NSMutableSet *_hashes;
    NSNumber *_resetGeneration;
    NSNumber *_resetTimestamp;
    NSData *_userSalt;
}

+ (id)log_t;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)description;
- (void)synchronize;
- (id)initWithKeyValueStore:(id)a0;
- (void)_handleHashesChangedNotification:(id)a0;
- (id)_loadSalt;
- (id)_loadResetInfo;
- (id)_loadHashesForKey:(id)a0;
- (void)_confirmOrRejectDonatedValues:(id)a0 contactIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_hashesForDonation:(id)a0 contactIdentifier:(id)a1;
- (void)_saveHashes:(id)a0 key:(id)a1;
- (void)_saveResetInfo;
- (id)_hashableStringsForDonation:(id)a0 contactIdentifier:(id)a1;
- (id)_sha256BytesForStrings:(id)a0 salt:(id)a1;
- (id)_hashableStringsForDonation:(id)a0;
- (id)_randomDataOfLength:(unsigned long long)a0;
- (void)_hashStrings:(id)a0 salt:(id)a1 digest:(char *)a2;
- (void)confirmDonatedValues:(id)a0 contactIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)rejectDonatedValues:(id)a0 contactIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)donatedValueHasBeenConfirmedOrRejected:(id)a0 contactIdentifier:(id)a1;
- (BOOL)canHashDonation:(id)a0;

@end
