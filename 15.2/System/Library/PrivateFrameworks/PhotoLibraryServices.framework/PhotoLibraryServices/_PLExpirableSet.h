@class NSMutableSet, NSMutableDictionary;

@interface _PLExpirableSet : NSObject {
    NSMutableSet *_set;
    NSMutableDictionary *_recentTouches;
    double _secondsToExpire;
}

- (BOOL)containsObject:(id)a0;
- (void)_touch:(id)a0;
- (void).cxx_destruct;
- (void)addObject:(id)a0;
- (void)dealloc;
- (void)removeObject:(id)a0;
- (id)initWithSecondsToExpire:(double)a0;
- (BOOL)_didExpireObject:(id)a0;

@end
