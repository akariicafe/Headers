@class NSArray, HKQueryAnchor;

@interface HDUserDomainConceptQueryServer : HDQueryServer {
    long long _limit;
    NSArray *_sortDescriptors;
    HKQueryAnchor *_anchor;
}

+ (Class)queryClass;

- (void)_queue_start;
- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void).cxx_destruct;

@end
