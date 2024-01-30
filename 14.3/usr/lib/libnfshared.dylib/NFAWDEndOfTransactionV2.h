@class NSData, AWDNFCHCIEndOfTransactionV2Event, NSString;

@interface NFAWDEndOfTransactionV2 : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSData *aid;
@property (nonatomic) unsigned int command;
@property (nonatomic) unsigned int commandParam1;
@property (nonatomic) unsigned int commandResult;
@property (retain, nonatomic) NSData *transactionId;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) unsigned int informative;
@property (nonatomic) unsigned int spid;
@property (retain, nonatomic) NSData *stationId;
@property (nonatomic) unsigned int transactionCategory;
@property (nonatomic) unsigned int transactionExtension;
@property (nonatomic) unsigned int transactionInProgress;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic) unsigned int expressType;
@property (nonatomic) BOOL isBlacklisted;
@property (nonatomic) BOOL hasExpiryDate;
@property (retain, nonatomic) NSData *terminalIdentifier;
@property (nonatomic) unsigned int totalRSSISamples;
@property (nonatomic) unsigned int avgRSSIValue;
@property (nonatomic) unsigned int maxRSSIValue;
@property (nonatomic) unsigned int minRSSIValue;
@property (nonatomic) unsigned int accessUniversityCode;
@property (nonatomic) unsigned int issuerCityCode;
@property (nonatomic) unsigned int endEventInterface;
@property (nonatomic) unsigned int sfiRead;
@property (nonatomic) unsigned int sfiUpdated;
@property (retain, nonatomic) AWDNFCHCIEndOfTransactionV2Event *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
