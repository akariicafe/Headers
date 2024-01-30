@class NSString, AWDNFCJCOPRestrictedModeEvent;

@interface NFAWDJCOPRestrictedMode : NSObject <NFAWDEventProtocol>

@property (nonatomic) BOOL contactlessMode;
@property (retain, nonatomic) AWDNFCJCOPRestrictedModeEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (unsigned int)getMetricId;
- (id)getMetric;
- (void)updateExceptionUUID:(id)a0;

@end
