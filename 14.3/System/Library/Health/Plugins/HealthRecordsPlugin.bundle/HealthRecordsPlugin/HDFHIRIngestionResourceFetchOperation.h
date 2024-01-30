@class NSError, HDFHIRResourceSchema, NSURL, NSData, HDFHIRCredentialedSession, NSObject;
@protocol OS_dispatch_group;

@interface HDFHIRIngestionResourceFetchOperation : HDClinicalIngestionPerAccountOperation {
    long long _queryMode;
    HDFHIRResourceSchema *_resourceSchema;
    id /* block */ _fetchResultsHandler;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *fetchGroup;
@property (readonly, nonatomic) HDFHIRCredentialedSession *session;
@property (copy, nonatomic) NSURL *fullRequestURL;
@property (readonly, copy, nonatomic) NSURL *effectiveRequestURL;
@property (readonly, copy, nonatomic) NSData *fetchedData;
@property (readonly, nonatomic) NSError *fetchError;

+ (id)_schemaVariableBindingsWithLastFetchDate:(id)a0;
+ (id)FHIRDateStringFromDate:(id)a0;
+ (id)FHIRDateTimeStringFromDate:(id)a0;

- (void).cxx_destruct;
- (void)main;
- (long long)_defaultRetryCount;
- (void)_performFetchWithURL:(id)a0 retryCount:(long long)a1;
- (void)_accumulateResponseTimeMetricWithTaskState:(id)a0;
- (void)_handleTaskCompletedWithData:(id)a0;
- (void)_accumulateRequestFailureMetricWithTaskState:(id)a0;
- (void)_handleTaskError:(id)a0 retryCount:(long long)a1;
- (id)_schemaVariableBindings;
- (id)initWithTask:(id)a0 account:(id)a1 nextOperation:(id)a2 session:(id)a3 queryMode:(long long)a4 resourceSchema:(id)a5 fetchResultsHandler:(id /* block */)a6;

@end
