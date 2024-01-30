@class NSMutableDictionary;

@interface FrameworkCache : NSObject {
    NSMutableDictionary *_selectorValueDict;
}

+ (SEL)getCacheableSelectorForNotification:(id)a0;
+ (unsigned char)getCachePolicyForSelector:(SEL)a0;

- (void)handleDisconnection;
- (void)handleNotification:(id)a0;
- (void)handleValue:(id)a0 forSelector:(SEL)a1;
- (id)init;
- (void).cxx_destruct;
- (id)valueForSelector:(SEL)a0;

@end
