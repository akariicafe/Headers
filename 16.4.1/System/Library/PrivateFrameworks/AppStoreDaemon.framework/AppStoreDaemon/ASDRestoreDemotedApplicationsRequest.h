@class ASDRestoreDemotedApplicationsRequestOptions;

@interface ASDRestoreDemotedApplicationsRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDRestoreDemotedApplicationsRequestOptions *options;

+ (long long)requestType;

- (void)startWithCompletionBlock:(id /* block */)a0;
- (id)initWithOptions:(id)a0;

@end
