@class NSString, NSDictionary;

@interface IDSLocalDeliveryMessageReceivedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) BOOL isFromDefaultPairedDevice;
@property (readonly, nonatomic) unsigned long long messageSize;
@property (readonly, nonatomic) unsigned long long linkType;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 isFromDefaultPairedDevice:(BOOL)a1 messageSize:(unsigned long long)a2 linkType:(unsigned long long)a3 priority:(unsigned long long)a4;

@end
