@class NSString, NSMutableDictionary, CKDOperationMetrics;

@interface CKDOperationStatistics : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *operationClassName;
@property (readonly, nonatomic) NSMutableDictionary *recentErrorsByDate;
@property (readonly) unsigned long long operationCount;
@property (readonly, nonatomic) CKDOperationMetrics *aggregateCKMetrics;
@property (readonly, nonatomic) CKDOperationMetrics *aggregateMMCSMetrics;

- (void)merge:(id)a0;
- (id)CKStatusReportArray;
- (void)_addMetrics:(id)a0 toAggregate:(id)a1;
- (id)initWithOperationClassName:(id)a0;
- (id)_trimmedError:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addOperation:(id)a0;

@end
