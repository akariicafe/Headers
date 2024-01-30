@class NSNumber;

@interface MTRUnitTestingClusterTestNullableOptionalResponseParams : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *wasPresent;
@property (copy, nonatomic) NSNumber *wasNull;
@property (copy, nonatomic) NSNumber *value;
@property (copy, nonatomic) NSNumber *originalValue;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
