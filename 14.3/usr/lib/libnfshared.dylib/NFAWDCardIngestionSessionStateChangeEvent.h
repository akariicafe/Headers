@class NSString, AWDNFCCardIngestionSessionStateChangeEvent;

@interface NFAWDCardIngestionSessionStateChangeEvent : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int state;
@property (nonatomic) unsigned int technology;
@property (nonatomic) unsigned int spStatusCode;
@property (nonatomic) unsigned int cardValidationStatus;
@property (nonatomic) unsigned int sessionStatus;
@property (retain, nonatomic) AWDNFCCardIngestionSessionStateChangeEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;
- (unsigned long long)updateCardIngestionSessionStateChangeInfoWithPreviousState:(unsigned long long)a0;

@end
