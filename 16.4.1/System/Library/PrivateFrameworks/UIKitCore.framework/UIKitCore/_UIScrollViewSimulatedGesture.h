@interface _UIScrollViewSimulatedGesture : NSObject {
    double _simulationDuration;
    double _beginTime;
    id /* block */ _beginBlock;
    id /* block */ _updateBlock;
    id /* block */ _endBlock;
}

- (void).cxx_destruct;
- (id)initWithDuration:(double)a0 begin:(id /* block */)a1 update:(id /* block */)a2 end:(id /* block */)a3;
- (BOOL)updateSimulation;

@end
