@class NSData, NSNumber;

@interface MTRDiagnosticLogsClusterRetrieveLogsResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *content;
@property (copy, nonatomic) NSNumber *timeStamp;
@property (copy, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSData *logContent;
@property (copy, nonatomic) NSNumber *utcTimeStamp;
@property (copy, nonatomic) NSNumber *timeSinceBoot;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
