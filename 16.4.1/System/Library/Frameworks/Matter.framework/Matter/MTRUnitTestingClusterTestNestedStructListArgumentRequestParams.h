@class NSNumber, MTRUnitTestingClusterNestedStructList;

@interface MTRUnitTestingClusterTestNestedStructListArgumentRequestParams : NSObject <NSCopying>

@property (copy, nonatomic) MTRUnitTestingClusterNestedStructList *arg1;
@property (copy, nonatomic) NSNumber *timedInvokeTimeoutMs;
@property (copy, nonatomic) NSNumber *serverSideProcessingTimeout;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
