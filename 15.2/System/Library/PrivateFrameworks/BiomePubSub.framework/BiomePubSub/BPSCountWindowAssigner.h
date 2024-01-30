@class NSString, BPSAggregator;

@interface BPSCountWindowAssigner : NSObject <BPSWindowAssigner> {
    unsigned long long _capacity;
    BPSAggregator *_aggregator;
    unsigned long long _identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)assignWindow:(id)a0 input:(id)a1;
- (id)initWithCapacity:(unsigned long long)a0 aggregator:(id)a1;

@end
