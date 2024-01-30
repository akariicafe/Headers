@interface IDSWRMMetricContainer : NSObject

@property (nonatomic) unsigned long long StreamBytesSent;
@property (nonatomic) unsigned long long StreamBytesReceived;
@property (nonatomic) unsigned long long StreamPacketsSent;
@property (nonatomic) unsigned long long StreamPacketsReceived;
@property (nonatomic) unsigned long long MessageSentSize;
@property (nonatomic) unsigned long long MessageDeliveredSize;
@property (nonatomic) unsigned long long MessageDeliveredRTT;
@property (nonatomic) unsigned long long MessageReceivedSize;
@property (nonatomic) unsigned long long MessageDeliveredDeliveryError;
@property (readonly, nonatomic) unsigned long long numMessageSentSize;
@property (readonly, nonatomic) unsigned long long numMessageDeliveredSize;
@property (readonly, nonatomic) unsigned long long numMessageDeliveredRTT;
@property (readonly, nonatomic) unsigned long long numMessageReceivedSize;

- (id)init;
- (id)description;
- (void)resetMetric;

@end
