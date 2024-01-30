@class NSSet;
@protocol GEOTransitVehicleUpdaterDelegate;

@interface GEOTransitVehicleUpdater : NSObject

@property (weak, nonatomic) id<GEOTransitVehicleUpdaterDelegate> delegate;
@property (copy, nonatomic) NSSet *tripIDs;
@property (nonatomic, getter=isActive) BOOL active;

- (void)dealloc;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
