@class NSDictionary, NSString;

@interface IDSWiProxDidSendDataMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) unsigned long long resultCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithResultCode:(unsigned long long)a0;

@end
