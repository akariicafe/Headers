@class NSString, NSDictionary;

@interface IDSLocalDeliverySocketOpenedMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *service;
@property (readonly, nonatomic) BOOL isToDefaultPairedDevice;
@property (readonly, nonatomic) unsigned long long openError;
@property (readonly, nonatomic) unsigned long long socketError;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithService:(id)a0 isToDefaultPairedDevice:(BOOL)a1 openError:(unsigned long long)a2 socketError:(unsigned long long)a3;

@end
