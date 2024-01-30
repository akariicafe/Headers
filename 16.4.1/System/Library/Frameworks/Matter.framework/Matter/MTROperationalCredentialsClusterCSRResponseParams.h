@class NSData, NSNumber;

@interface MTROperationalCredentialsClusterCSRResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSData *nocsrElements;
@property (copy, nonatomic) NSData *attestationSignature;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
