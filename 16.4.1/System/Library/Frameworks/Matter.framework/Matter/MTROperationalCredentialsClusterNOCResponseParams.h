@class NSNumber, NSString;

@interface MTROperationalCredentialsClusterNOCResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSNumber *fabricIndex;
@property (copy, nonatomic) NSString *debugText;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
