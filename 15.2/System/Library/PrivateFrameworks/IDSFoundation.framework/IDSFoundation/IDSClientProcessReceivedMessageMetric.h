@class NSString, NSDictionary;

@interface IDSClientProcessReceivedMessageMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) unsigned long long messageSize;
@property (readonly, nonatomic) unsigned long long deltaTime;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithServiceIdentifier:(id)a0 messageSize:(unsigned long long)a1 deltaTime:(unsigned long long)a2 priority:(unsigned long long)a3;

@end
