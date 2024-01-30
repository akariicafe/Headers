@class NSMutableDictionary;

@interface AVSafePerformOnMainThreadTargetDict : NSObject {
    NSMutableDictionary *_obj;
}

+ (id)dict;

- (id)objectForKey:(id)a0;
- (id)init;
- (oneway void)release;
- (void)dealloc;
- (void)setObject:(id)a0 forKey:(id)a1;

@end
