@class NSMutableDictionary;

@interface CRLanguageResourcesManager : NSObject

@property (retain) NSMutableDictionary *languageResourceStacks;
@property long long resourceType;

+ (id)sharedManager;
+ (id)postProcessManager;

- (void).cxx_destruct;
- (BOOL)lockResourcesForLocale:(id)a0 sender:(id)a1 block:(id /* block */)a2;
- (id)initWithType:(long long)a0;
- (void)addSubscriber:(id)a0 forLocale:(id)a1;
- (void)removeSubscriber:(id)a0 forLocale:(id)a1;

@end
