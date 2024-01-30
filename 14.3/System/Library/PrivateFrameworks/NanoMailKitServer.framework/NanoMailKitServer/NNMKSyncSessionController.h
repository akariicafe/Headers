@class NSDate, NSMutableSet, NSMutableDictionary;

@interface NNMKSyncSessionController : NSObject

@property (retain, nonatomic) NSMutableSet *messageIdsToIgnoreStatusUpdates;
@property (retain, nonatomic) NSMutableDictionary *notificationPayloadAcks;
@property (retain, nonatomic) NSMutableDictionary *syncingAccountIdentityByUsername;
@property (retain, nonatomic) NSMutableDictionary *standaloneStateByAccountId;
@property (nonatomic) double accountAuthRequestLastRequestTime;
@property (retain, nonatomic) NSDate *lastSyncDueToMailboxesMismatchRequestTime;
@property (nonatomic) BOOL deviceInStandalone;

- (void)deleteStandaloneStateForAccountId:(id)a0;
- (void)updateStandaloneState:(unsigned long long)a0 forAccountId:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)standaloneStateForAccountId:(id)a0;

@end
