@class NSDictionary, NSString;

@interface IDSWiProxDidDisconnectFromPeerMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) unsigned long long duration;
@property (readonly, nonatomic) unsigned long long resultCode;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDuration:(unsigned long long)a0 resultCode:(unsigned long long)a1;

@end
