@class NSMutableDictionary, VUIAppContext;

@interface VUIJSFoundation : NSObject

@property (weak, nonatomic) VUIAppContext *appContext;
@property (retain, nonatomic) NSMutableDictionary *jsTimers;
@property (retain, nonatomic) NSMutableDictionary *dateFormatterCache;

- (void).cxx_destruct;
- (id)initWithAppContext:(id)a0;
- (void)stopTimers;
- (void)_clearTimer:(id)a0;
- (void)_jsTimerFired:(id)a0;
- (id)_startTimer:(id)a0 time:(long long)a1 repeating:(BOOL)a2;
- (void)clearInterval:(id)a0;
- (void)clearTimeout:(id)a0;
- (id)setInterval:(id)a0 time:(long long)a1;
- (id)setTimeout:(id)a0 time:(long long)a1;

@end
