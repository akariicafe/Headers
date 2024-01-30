@class NSString, NSSet, NSDictionary;

@interface COStateClientInfo : NSObject {
    NSDictionary *_state;
    NSDictionary *_observers;
}

@property (readonly, copy, nonatomic) NSString *suite;
@property (readonly, copy, nonatomic) NSSet *clusters;
@property (readonly, copy, nonatomic) NSDictionary *observers;
@property (readonly, copy, nonatomic) NSDictionary *state;
@property (nonatomic) BOOL isWriting;
@property (nonatomic) BOOL disconnected;

- (id)observers;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)state;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateForCluster:(id)a0;
- (id)initWithSuite:(id)a0 clusters:(id)a1;

@end
