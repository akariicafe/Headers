@interface _MPUStackItemReuseCache : NSObject

+ (void)registerStackViewForReuseIdentifier:(id)a0;
+ (void)unregisterStackViewForReuseIdentifier:(id)a0;
+ (void)enqueueReusableStackItem:(id)a0 forReuseIdentifier:(id)a1;
+ (id)dequeueReusableStackItemWithIdentifier:(id)a0;

@end
