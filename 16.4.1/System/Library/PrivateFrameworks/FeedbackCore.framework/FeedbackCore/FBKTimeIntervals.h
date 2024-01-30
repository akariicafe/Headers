@class NSMutableDictionary;

@interface FBKTimeIntervals : NSObject

@property (class, readonly, nonatomic) FBKTimeIntervals *sharedInstance;

@property (retain, nonatomic) NSMutableDictionary *events;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (id)didEndEvent:(unsigned long long)a0;
- (id)didEndEvent:(unsigned long long)a0 context:(id)a1;
- (void)didStartEvent:(unsigned long long)a0;
- (id)keyForEvent:(unsigned long long)a0 context:(id)a1;
- (void)willStartEvent:(unsigned long long)a0 context:(id)a1;

@end
