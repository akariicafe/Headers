@class NSData, NSString, AWDNFCHCIEndOfTransactionEvent;

@interface NFAWDEndOfTransaction : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int command;
@property (retain, nonatomic) NSData *transactionId;
@property (nonatomic) unsigned int transactionStatus;
@property (nonatomic) unsigned int transactionType;
@property (nonatomic) unsigned int informative;
@property (retain, nonatomic) NSData *aid;
@property (nonatomic) unsigned long long amount;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic) unsigned long long iad;
@property (nonatomic) unsigned int mobileCVMResult;
@property (retain, nonatomic) NSData *cdi;
@property (retain, nonatomic) NSData *maid;
@property (nonatomic) unsigned int msc;
@property (retain, nonatomic) NSData *mcii;
@property (nonatomic) unsigned int expressType;
@property (nonatomic) unsigned int totalRSSISamples;
@property (nonatomic) unsigned int avgRSSIValue;
@property (nonatomic) unsigned int maxRSSIValue;
@property (nonatomic) unsigned int minRSSIValue;
@property (retain, nonatomic) AWDNFCHCIEndOfTransactionEvent *metric;
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
