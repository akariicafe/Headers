@class NSString, SUConcernItem, NSNumber;

@interface SUPostConcernOperation : ISOperation <ISStoreURLOperationDelegate>

@property (retain) SUConcernItem *concern;
@property (retain) NSString *commentText;
@property unsigned long long itemIdentifier;
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
- (id)initWithConcern:(id)a0;

@end
