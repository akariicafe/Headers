@class MABaseGraph;

@interface MAGraphReference : NSObject {
    unsigned long long _hash;
}

@property (readonly, weak) MABaseGraph *graph;
@property (weak) MABaseGraph *concreteGraph;

- (id)initWithGraph:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
