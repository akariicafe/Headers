@class NSData, NSString, AWDNFCHCEVASGetData;

@interface NFAWDVASGetData : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int version;
@property (nonatomic) BOOL signupOnly;
@property (nonatomic) unsigned int terminalCapabilities;
@property (retain, nonatomic) NSData *merchantID;
@property (retain, nonatomic) NSString *merchantURL;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) unsigned int filterValue;
@property (nonatomic) unsigned int swStatus;
@property (retain, nonatomic) AWDNFCHCEVASGetData *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)a0;

@end
