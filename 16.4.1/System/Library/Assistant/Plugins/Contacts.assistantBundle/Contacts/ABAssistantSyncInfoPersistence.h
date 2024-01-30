@interface ABAssistantSyncInfoPersistence : NSObject

+ (id)filePath;
+ (id)stringForKey:(id)a0;
+ (id)infoDictionary;
+ (id)valueForKey:(id)a0;
+ (void)saveValue:(id)a0 forKey:(id)a1;
+ (BOOL)saveFileForDictionary:(id)a0;
+ (void)saveString:(id)a0 forKey:(id)a1;

@end
