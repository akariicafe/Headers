@class NSTimer, GEOArrivalRegion;
@protocol MNArrivalRegionTimerDelegate;

@interface MNArrivalRegionTimer : NSObject {
    GEOArrivalRegion *_arrivalRegion;
    NSTimer *_timer;
}

@property (weak, nonatomic) id<MNArrivalRegionTimerDelegate> delegate;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateForLocation:(id)a0;
- (id)initWithArrivalRegion:(id)a0;

@end
