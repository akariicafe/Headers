@class NSMutableDictionary;

@interface CRLanguageResourcesManager : NSObject

@property (retain) NSMutableDictionary *languageResourceStacks;

+ (id)sharedManager;

- (void).cxx_destruct;
- (void)addSubscriber:(id)a0 forLocale:(id)a1;
- (void)removeSubscriber:(id)a0 forLocale:(id)a1;
- (BOOL)lockResourcesForLocale:(id)a0 sender:(id)a1 block:(id /* block */)a2;

@end
