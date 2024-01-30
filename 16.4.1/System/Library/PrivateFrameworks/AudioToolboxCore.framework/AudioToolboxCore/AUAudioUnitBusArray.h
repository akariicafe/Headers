@class AUAudioUnit, NSMutableArray;

@interface AUAudioUnitBusArray : NSObject <NSFastEnumeration> {
    NSMutableArray *_busses;
}

@property (nonatomic) struct vector<BusPropertyObserver, std::allocator<BusPropertyObserver>> { struct BusPropertyObserver *__begin_; struct BusPropertyObserver *__end_; struct __compressed_pair<BusPropertyObserver *, std::allocator<BusPropertyObserver>> { struct BusPropertyObserver *__value_; } __end_cap_; } observers;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic, getter=isCountChangeable) BOOL countChangeable;
@property (readonly, nonatomic) AUAudioUnit *ownerAudioUnit;
@property (readonly, nonatomic) long long busType;

- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (void)addObserverToAllBusses:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void)removeObserverFromAllBusses:(id)a0 forKeyPath:(id)a1 context:(void *)a2;
- (id).cxx_construct;
- (void)replaceBusses:(id)a0;
- (void)dealloc;
- (BOOL)setBusCount:(unsigned long long)a0 error:(id *)a1;
- (void)indexBusses;
- (id)initWithAudioUnit:(id)a0 busType:(long long)a1;
- (id)init;
- (id)initWithAudioUnit:(id)a0 busType:(long long)a1 busses:(id)a2;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;

@end
