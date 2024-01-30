@class NSString, PFUbiquityLocation, NSMutableDictionary, NSMutableArray;

@interface PFUbiquityMigrationAssistant : NSObject {
    NSString *_ubiquityName;
    NSString *_localPeerID;
    PFUbiquityLocation *_ubiquityRootLocation;
    NSMutableDictionary *_baselineLocationsByVersionHash;
    NSMutableDictionary *_logLocationsByVersionHash;
    NSMutableArray *_receiptLocations;
    NSMutableArray *_orderedReceipts;
}

@property (readonly, nonatomic) NSString *previousModelVersionHash;
@property (readonly, nonatomic) NSString *currentModelVersionHash;

- (void)dealloc;
- (id)initWithUbiquityRootLocation:(id)a0 peerID:(id)a1 ubiquityName:(id)a2 modelVersionHash:(id)a3;
- (id)transactionLogLocationsForModelVersionHash:(id)a0;
- (id)transactionLogLocationsByModelVersionHash;
- (id)baselineLocationsByModelVersionHash;
- (id)latestBaselineLocationSkipModelVersionHash:(id)a0;
- (void)_populateBaselineAndTransactionLogLocations;
- (id)receiptLocations;
- (BOOL)canUseReceipts;
- (id)orderedReceipts;
- (id)latestTransactionLogForModelVersionHash:(id)a0;
- (BOOL)electPreviousModelVersionHashFromTransactionLogsError:(id *)a0;

@end
