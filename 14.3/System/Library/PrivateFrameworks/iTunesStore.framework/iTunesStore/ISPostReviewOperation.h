@class ISReview, NSNumber, NSString;

@interface ISPostReviewOperation : ISOperation <ISStoreURLOperationDelegate>

@property (getter=isBackgroundReview) BOOL backgroundReview;
@property (retain) ISReview *review;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)run;
- (void)dealloc;
- (id)_httpBody;
- (void)operation:(id)a0 finishedWithOutput:(id)a1;

@end
