@class NSString, NSSet, NSDictionary;

@interface COStateClientInfo : NSObject {
    NSDictionary *_state;
    NSDictionary *_observers;
}

@property (readonly, copy, nonatomic) NSString *suite;
@property (readonly, copy, nonatomic) NSSet *clusters;
@property (readonly, copy, nonatomic) NSDictionary *observers;
@property (readonly, copy, nonatomic) NSDictionary *state;
@property (nonatomic) long long outstandingWriteCount;
@property (nonatomic) BOOL disconnected;

- (id)state;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)observers;
- (void).cxx_destruct;
- (id)initWithSuite:(id)a0 clusters:(id)a1;
- (id)stateForCluster:(id)a0;

@end
