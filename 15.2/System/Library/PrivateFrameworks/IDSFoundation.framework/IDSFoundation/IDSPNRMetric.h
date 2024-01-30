@class NSDictionary, NSString;

@interface IDSPNRMetric : NSObject <CUTCoreAnalyticsMetric>

@property (nonatomic) long long pnrReason;
@property (nonatomic) long long mechanism;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPNRReason:(long long)a0 mechanism:(long long)a1;

@end
