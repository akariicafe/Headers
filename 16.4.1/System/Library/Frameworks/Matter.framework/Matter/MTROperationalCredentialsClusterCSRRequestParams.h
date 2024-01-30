@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCSRRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *csrNonce;
@property (copy, nonatomic) NSNumber *isForUpdateNOC;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
