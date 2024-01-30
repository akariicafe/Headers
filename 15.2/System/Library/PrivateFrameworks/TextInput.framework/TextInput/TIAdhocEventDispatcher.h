@class NSMutableDictionary;

@interface TIAdhocEventDispatcher : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventSpecMap;

+ (id)sharedInstance;

- (id)replacePeriodsInString:(id)a0;
- (id)loadEventSpecMapFromConfig:(id)a0;
- (void).cxx_destruct;
- (void)dispatchEventForStatisticWithName:(id)a0 andValue:(long long)a1 withCompletionHandler:(id /* block */)a2;
- (void)dispatchEventForStatisticWithName:(id)a0 andValue:(long long)a1;
- (id)initFromConfig:(id)a0;

@end
