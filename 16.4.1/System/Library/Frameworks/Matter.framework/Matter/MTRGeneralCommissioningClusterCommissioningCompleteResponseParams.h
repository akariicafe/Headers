@class NSNumber, NSString;

@interface MTRGeneralCommissioningClusterCommissioningCompleteResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *errorCode;
@property (copy, nonatomic) NSString *debugText;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
