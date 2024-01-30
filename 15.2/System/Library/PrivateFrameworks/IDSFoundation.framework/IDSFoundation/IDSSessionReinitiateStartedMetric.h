@class NSString, NSDictionary;

@interface IDSSessionReinitiateStartedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithGuid:(id)a0;
- (void).cxx_destruct;

@end
