@class NSString;

@interface IDSRTCLogger : NSObject <CUTMetricLogger>

@property (readonly, nonatomic) unsigned short category;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)loggerWithCategory:(unsigned short)a0;

- (id)initWithCategory:(unsigned short)a0;
- (void)logMetric:(id)a0;

@end
