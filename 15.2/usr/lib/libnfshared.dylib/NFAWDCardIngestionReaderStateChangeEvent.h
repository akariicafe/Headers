@class NSString, AWDNFCCardIngestionReaderStateChangeEvent;

@interface NFAWDCardIngestionReaderStateChangeEvent : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int errorCode;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) AWDNFCCardIngestionReaderStateChangeEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
