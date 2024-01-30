@class NSString, NSNumber, NSDictionary;

@interface IDSSessionStartedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *guid;
@property (readonly, nonatomic) NSNumber *protocolVersionNumber;
@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) unsigned int clientType;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithGuid:(id)a0 protocolVersionNumber:(id)a1 serviceName:(id)a2 clientType:(unsigned int)a3;

@end
