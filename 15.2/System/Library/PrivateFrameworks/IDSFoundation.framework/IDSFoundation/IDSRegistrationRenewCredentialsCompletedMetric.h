@class NSString, NSDictionary;

@interface IDSRegistrationRenewCredentialsCompletedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) long long renewResult;
@property (readonly, nonatomic) NSString *errorDomain;
@property (readonly, nonatomic) long long errorCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRenewResult:(long long)a0 errorDomain:(id)a1 errorCode:(long long)a2;

@end
