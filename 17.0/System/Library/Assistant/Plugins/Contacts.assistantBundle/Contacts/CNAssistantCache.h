@interface CNAssistantCache : NSObject

+ (id)cachePath;
+ (BOOL)saveCache:(id)a0;
+ (id)cacheDictionary;
+ (BOOL)addUpdate:(id)a0 forAssistantUrl:(id)a1;
+ (BOOL)removeAllUpdates;
+ (BOOL)removeUpdatesForAssistantUrl:(id)a0;
+ (id)updatesForAssistantUrl:(id)a0;

@end
