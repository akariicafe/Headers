@class NSString, NSDictionary;

@interface IDSOTRSessionNegotiationMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned int result;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 priority:(unsigned long long)a1 duration:(unsigned long long)a2 result:(unsigned int)a3;

@end
