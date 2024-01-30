@class NSMutableDictionary;

@interface FrameworkCache : NSObject {
    NSMutableDictionary *_selectorValueDict;
}

+ (SEL)getCacheableSelectorForNotification:(id)a0;
+ (unsigned char)getCachePolicyForSelector:(SEL)a0;

- (void)handleDisconnection;
- (id)valueForSelector:(SEL)a0;
- (void)handleValue:(id)a0 forSelector:(SEL)a1;
- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
