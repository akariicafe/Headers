@class HMFTimer, NSMutableArray, NSDate;
@protocol HMDBatchLocationDelegate;

@interface HMDBatchLocationContext : NSObject

@property (weak) id<HMDBatchLocationDelegate> delegate;
@property (readonly) NSMutableArray *tuples;
@property (readonly) HMFTimer *timer;
@property (readonly, copy) NSDate *startDate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
