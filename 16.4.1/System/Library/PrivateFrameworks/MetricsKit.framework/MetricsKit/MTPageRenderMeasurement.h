@class NSString, NSArray;

@interface MTPageRenderMeasurement : MTPerfBaseMeasurement <MTPageRenderMeasurementData>

@property (readonly, copy, nonatomic) NSString *pageId;
@property (readonly, copy, nonatomic) NSString *pageType;
@property (readonly, copy, nonatomic) NSString *pageContext;
@property (readonly, copy, nonatomic) NSArray *eventData;
@property (readonly, copy, nonatomic) NSArray *additionalFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *pageId;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *pageContext;

- (void)setXpSamplingPercentageUsers:(double)a0;
- (void)mark:(id)a0;
- (void)setXpSessionDuration:(unsigned long long)a0;
- (void)setXpSamplingForced:(BOOL)a0;
- (void).cxx_destruct;
- (void)setAppLaunch:(BOOL)a0;
- (void)setLaunchCorrelationKey:(id)a0;
- (id)initWithMeasurementTransformer:(id)a0 pageId:(id)a1 pageType:(id)a2 pageContext:(id)a3 eventData:(id)a4;
- (void)mark:(id)a0 date:(id)a1;
- (void)mark:(id)a0 time:(long long)a1;
- (void)setPreloadStatus:(id)a0;
- (void)setPrimaryDataResponseCached:(BOOL)a0;

@end
