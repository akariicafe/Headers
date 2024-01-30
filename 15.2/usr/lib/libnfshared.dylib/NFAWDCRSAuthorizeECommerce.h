@class NSData, AWDNFCSECRSAuthorizeECommerce, NSString;

@interface NFAWDCRSAuthorizeECommerce : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int status;
@property (nonatomic) unsigned int method;
@property (retain, nonatomic) NSData *aid;
@property (retain, nonatomic) NSData *merchantId;
@property (nonatomic) unsigned int countryCode;
@property (nonatomic) unsigned int currencyCode;
@property (nonatomic) unsigned long long transactionTotal;
@property (nonatomic) unsigned long long otherAmount;
@property (nonatomic) unsigned int merchantCapabilities;
@property (retain, nonatomic) NSData *transactionId;
@property (nonatomic) unsigned int transactionType;
@property (retain, nonatomic) AWDNFCSECRSAuthorizeECommerce *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
