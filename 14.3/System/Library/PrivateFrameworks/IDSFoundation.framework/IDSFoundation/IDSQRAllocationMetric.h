@class NSString, NSDictionary;

@interface IDSQRAllocationMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned int result;
@property (readonly, nonatomic) unsigned int hasRecipientAccepted;
@property (readonly, nonatomic) unsigned int payloadSize;
@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) NSString *service;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDuration:(unsigned long long)a0 result:(unsigned int)a1 hasRecipientAccepted:(unsigned int)a2 payloadSize:(unsigned int)a3 topic:(id)a4 service:(id)a5;

@end
