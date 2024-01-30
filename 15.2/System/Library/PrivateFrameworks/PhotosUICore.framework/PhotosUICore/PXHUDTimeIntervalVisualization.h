@class PXTimeInterval;

@interface PXHUDTimeIntervalVisualization : PXHUDVisualization {
    id _stateTransitionHandlerToken;
}

@property (retain, nonatomic) PXTimeInterval *timeInterval;

+ (id)visualizationWithTimeInterval:(id)a0;

- (void).cxx_destruct;

@end
