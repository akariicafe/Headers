@class NSString, KVDictionaryLog;

@interface KMProviderHistoryLog : NSObject {
    KVDictionaryLog *_log;
    NSString *_originAppId;
    BOOL _donationStartTimeRecorded;
}

- (unsigned long long)getVersion;
- (void).cxx_destruct;
- (id)getHistoryToken;
- (id)_recordVersion:(unsigned long long)a0;
- (id)_recordDonationEndTime;
- (id)_recordHistoryToken:(id)a0;
- (id)getDonationEndTime;
- (id)getDonationStartTime;
- (id)initWithOriginAppId:(id)a0;
- (id)initWithOriginAppId:(id)a0 rootDirectory:(id)a1;
- (BOOL)recordChangesAcceptedWithVersion:(unsigned long long)a0 historyToken:(id)a1;
- (BOOL)recordDonationStartTime;

@end
