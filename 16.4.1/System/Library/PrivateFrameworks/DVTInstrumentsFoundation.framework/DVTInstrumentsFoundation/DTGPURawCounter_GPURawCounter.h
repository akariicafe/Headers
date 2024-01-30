@class GPURawCounterSelect;

@interface DTGPURawCounter_GPURawCounter : DTGPURawCounter

@property (nonatomic) unsigned long long sourceIdx;
@property (nonatomic) unsigned long long counterIdx;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned long long valueType;
@property (retain, nonatomic) GPURawCounterSelect *rawCounterSelect;

- (id)initWithName:(id)a0;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 width:(unsigned int)a1;

@end
