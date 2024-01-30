@class NSString, NSFileHandle;

@interface HDClinicalIngestionTaskContext : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) BOOL isBackgroundTask;
@property (readonly, nonatomic) BOOL shouldFetchImmediately;
@property (readonly, nonatomic) BOOL shouldSkipGatewaysUpdate;
@property (readonly, nonatomic) BOOL shouldSkipFetch;
@property (readonly, nonatomic) BOOL shouldSkipTermbaseUpdate;
@property (readonly, nonatomic) BOOL shouldSkipIngestionMetricsSubmission;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSFileHandle *inputFileHandle;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithOptions:(unsigned long long)a0 reason:(id)a1;

@end
