@class SHSignature, NSArray, NSNumber, NSObject;
@protocol OS_dispatch_source, SHMediaTimelineDelegate;

@interface SHMediaTimeline : NSObject

@property (readonly, nonatomic) NSNumber *timeToNextMediaItemScopeChange;
@property (readonly, nonatomic) NSArray *mediaItems;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timerDispatchSource;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (weak, nonatomic) id<SHMediaTimelineDelegate> delegate;
@property (readonly, nonatomic) NSArray *inScopeMediaItems;
@property (readonly, nonatomic) SHSignature *querySignature;

+ (id)blankMediaItemWhenNothingIsInScope:(id)a0;
+ (double)countdownForMatchedMediaItem:(id)a0;
+ (double)nextEventForRange:(id)a0 atMatchOffset:(double)a1;

- (BOOL)finished;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithMatch:(id)a0;
- (void)startGenerating;
- (id)sortMediaItems:(id)a0;
- (void)cancelTimerSource;
- (id)earliestInscopeRangeForMatchedMediaItem:(id)a0;
- (void)startTimerForNextEvent;
- (void)stopGenerating;

@end
