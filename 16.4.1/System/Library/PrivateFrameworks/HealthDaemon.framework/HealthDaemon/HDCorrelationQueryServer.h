@class NSDictionary;

@interface HDCorrelationQueryServer : HDBatchedQueryServer {
    BOOL _permitPartiallyFilteredCorrelations;
    BOOL _suspended;
}

@property (readonly, nonatomic) NSDictionary *dataFilters;

+ (id)requiredEntitlements;
+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
