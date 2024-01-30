@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject {
    NSMutableDictionary *_cacheWithoutInputMode;
    NSMutableDictionary *_cacheWithInputMode;
}

+ (id)sharedInstance;

- (id)flush;
- (void)addValue:(int)a0 toStatisticWithName:(id)a1 inCache:(id)a2;
- (id)init;
- (void)addValue:(int)a0 toStatisticWithName:(id)a1 andInputMode:(id)a2;
- (void).cxx_destruct;

@end
