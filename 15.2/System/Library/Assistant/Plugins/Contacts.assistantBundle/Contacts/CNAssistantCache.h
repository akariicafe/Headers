@interface CNAssistantCache : NSObject

+ (id)cachePath;
+ (BOOL)removeUpdatesForAssistantUrl:(id)a0;
+ (BOOL)removeAllUpdates;
+ (BOOL)addUpdate:(id)a0 forAssistantUrl:(id)a1;
+ (id)updatesForAssistantUrl:(id)a0;
+ (id)cacheDictionary;
+ (BOOL)saveCache:(id)a0;

@end
