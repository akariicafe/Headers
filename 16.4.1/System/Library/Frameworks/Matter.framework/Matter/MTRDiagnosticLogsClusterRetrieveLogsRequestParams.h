@class NSNumber, NSData;

@interface MTRDiagnosticLogsClusterRetrieveLogsRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *intent;
@property (copy, nonatomic) NSNumber *requestedProtocol;
@property (copy, nonatomic) NSData *transferFileDesignator;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
