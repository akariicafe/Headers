@class NSString, AWDNFCHardwareExceptionEvent;

@interface NFAWDHardwareException : NSObject <NFAWDEventProtocol>

@property (nonatomic) unsigned int hardwareType;
@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *data;
@property (retain, nonatomic) AWDNFCHardwareExceptionEvent *metric;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getMetric;
- (unsigned int)getMetricId;
- (void).cxx_destruct;
- (id)init;
- (void)updateExceptionUUID:(id)a0;

@end
