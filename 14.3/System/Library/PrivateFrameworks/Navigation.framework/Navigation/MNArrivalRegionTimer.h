@class NSTimer, GEOArrivalRegion;
@protocol MNArrivalRegionTimerDelegate;

@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion *_arrivalRegion;
    NSTimer *_timer;
}

@property (weak, nonatomic) id<MNArrivalRegionTimerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateForLocation:(id)a0;
- (id)initWithArrivalRegion:(id)a0;

@end
