@class NSMutableDictionary;
@protocol CAMTimerCacheDelegate;

@interface CAMTimerCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_timersByType;
@property (weak, nonatomic) id<CAMTimerCacheDelegate> delegate;

- (BOOL)isRunningTimerForKey:(id)a0;
- (void)cancelAllTimers;
- (void)cancelTimerForKey:(id)a0;
- (void)_handleTimer:(id)a0 forKey:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)startTimerForKey:(id)a0 duration:(double)a1;

@end
