@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCertificateChainResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *certificate;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
