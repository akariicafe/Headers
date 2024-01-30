@class NSMutableDictionary;

@interface PKInkManager : NSObject

@property (readonly, nonatomic) NSMutableDictionary *inks;

+ (void)clearCachedManager;
+ (id)defaultInkManager;

- (id)init;
- (void).cxx_destruct;
- (id)inkBehaviorForIdentifier:(id)a0 version:(unsigned long long)a1 variant:(id)a2;
- (id)inkBehaviorForIdentifier:(id)a0 variant:(id)a1;

@end
