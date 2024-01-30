@interface CNAssistantCache : NSObject

+ (BOOL)saveCache:(id)a0;
+ (id)cachePath;
+ (id)cacheDictionary;
+ (BOOL)addUpdate:(id)a0 forAssistantUrl:(id)a1;
+ (BOOL)removeAllUpdates;
+ (BOOL)removeUpdatesForAssistantUrl:(id)a0;
+ (id)updatesForAssistantUrl:(id)a0;

@end
