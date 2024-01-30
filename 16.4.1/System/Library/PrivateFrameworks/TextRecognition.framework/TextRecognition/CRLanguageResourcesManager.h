@class NSMutableDictionary;

@interface CRLanguageResourcesManager : NSObject

@property (retain) NSMutableDictionary *languageResourceStacks;
@property long long resourceType;

+ (id)sharedManager;
+ (id)lineWrappingManager;
+ (id)postProcessManager;

- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0 forLocale:(id)a1;
- (BOOL)lockResourcesForLocale:(id)a0 sender:(id)a1 block:(id /* block */)a2;
- (void)removeSubscriber:(id)a0 forLocale:(id)a1;
- (void)subscriber:(id)a0 willDeactivateForLocale:(id)a1;

@end
