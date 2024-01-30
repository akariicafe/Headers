@class NSSet;
@protocol GEOTransitRouteUpdaterDelegate;

@interface GEOTransitRouteUpdater : NSObject

@property (weak, nonatomic) id<GEOTransitRouteUpdaterDelegate> delegate;
@property (copy, nonatomic) NSSet *requests;
@property (nonatomic, getter=isActive) BOOL active;

- (id)initWithDelegate:(id)a0 andInitialTTL:(double)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
