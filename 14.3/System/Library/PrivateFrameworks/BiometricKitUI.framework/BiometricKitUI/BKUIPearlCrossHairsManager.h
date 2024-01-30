@class NSMutableArray;

@interface BKUIPearlCrossHairsManager : NSObject {
    struct vector<InstanceInfo, std::__1::allocator<InstanceInfo> > { struct InstanceInfo *__begin_; struct InstanceInfo *__end_; struct __compressed_pair<InstanceInfo *, std::__1::allocator<InstanceInfo> > { struct InstanceInfo *__value_; } __end_cap_; } _instanceVector;
}

@property (readonly) NSMutableArray *springInstances;
@property (readonly) struct InstanceInfo { struct { void /* unknown type, empty encoding */ x0[4]; } x0; } *instanceData;
@property (nonatomic) BOOL grayscale;

- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setTarget:(SEL)a0;
- (void)update:(double)a0;
- (void)setValue:(SEL)a0;
- (void)addInstance:(id)a0;
- (void)setSpringsStates:(unsigned long long)a0;

@end
