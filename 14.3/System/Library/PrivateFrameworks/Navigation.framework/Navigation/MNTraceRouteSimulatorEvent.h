@class GEOLocation;

@interface MNTraceRouteSimulatorEvent : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) GEOLocation *location;
@property (readonly, nonatomic) id /* block */ completion;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:(id)a0;
- (id)initWithTime:(double)a0 completion:(id /* block */)a1;

@end
