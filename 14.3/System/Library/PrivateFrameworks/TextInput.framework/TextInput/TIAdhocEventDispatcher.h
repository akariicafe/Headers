@class NSMutableDictionary;

@interface TIAdhocEventDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventSpecMap;

+ (id)sharedInstance;

- (id)initFromConfig:(id)a0;
- (void).cxx_destruct;
- (id)loadEventSpecMapFromConfig:(id)a0;
- (void)dispatchEventForStatisticWithName:(id)a0 andValue:(long long *)a1;
- (id)replacePeriodsInString:(id)a0;
- (void)dispatchEventForStatisticWithName:(id)a0 andValue:(long long *)a1 withCompletionHandler:(id /* block */)a2;

@end
