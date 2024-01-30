@interface _UIScrollViewSimulatedGesture : NSObject {
    double _simulationDuration;
    double _beginTime;
    id /* block */ _beginBlock;
    id /* block */ _updateBlock;
    id /* block */ _endBlock;
}

- (BOOL)updateSimulation;
- (id)initWithDuration:(double)a0 begin:(id /* block */)a1 update:(id /* block */)a2 end:(id /* block */)a3;
- (void).cxx_destruct;

@end
