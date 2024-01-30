@class NSData, NSString, AWDNFCTSMEndEvent;

@interface NFAWDTSMEnd : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int status;
@property (nonatomic) BOOL authEnabled;
@property (nonatomic) BOOL mfdEnabled;
@property (nonatomic) unsigned int lifeCycleState;
@property (nonatomic) BOOL restrictedModeExit;
@property (retain, nonatomic) NSData *aid;
@property (retain, nonatomic) NSData *discretionaryData;
@property (retain, nonatomic) AWDNFCTSMEndEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateUUID:(id)a0 withUUIDRefTimestamp:(unsigned long long)a1;

@end
