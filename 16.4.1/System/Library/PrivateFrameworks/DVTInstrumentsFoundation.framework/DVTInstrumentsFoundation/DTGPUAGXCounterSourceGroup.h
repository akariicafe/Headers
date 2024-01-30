@class NSArray;
@protocol GPURawCounterSourceGroup;

@interface DTGPUAGXCounterSourceGroup : NSObject {
    id<GPURawCounterSourceGroup> _sourceGroup;
    NSArray *_selects;
}

@property (readonly, nonatomic) NSArray *sources;

- (void)stop;
- (void).cxx_destruct;
- (id)initWithSourceGroup:(id)a0 selects:(id)a1;
- (void)sampleCounters:(unsigned long long)a0 callback:(id /* block */)a1;
- (BOOL)start:(unsigned long long)a0 vendorFeatures:(id)a1;

@end
