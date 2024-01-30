@class _TtC18PodcastsFoundation17FutureDateChecker;

@interface PodcastsFoundation.FutureDateChecker : NSObject {
    void /* unknown type, empty encoding */ leniency;
    void /* unknown type, empty encoding */ assertOnFutures;
}

@property (class, nonatomic, readonly) _TtC18PodcastsFoundation17FutureDateChecker *sharedInstance;
@property (class, nonatomic) BOOL sharedInstanceShouldAssertTestsOnly;

- (id)init;
- (void).cxx_destruct;
- (id)initWithLeniency:(double)a0 assertOnFutures:(BOOL)a1;
- (BOOL)isFutureWithTimestamp:(double)a0 boundBy:(double)a1;
- (BOOL)isFutureWithTimestamp:(double)a0;
- (BOOL)isFutureWithDate:(id)a0 boundBy:(id)a1;
- (double)timestamp:(double)a0 boundBy:(double)a1;
- (double)timestampForDate:(id)a0 boundBy:(id)a1;
- (double)timestampBoundByNow:(double)a0;
- (double)timestampBoundByNowForDate:(id)a0;

@end
