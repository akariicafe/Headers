@interface ABAssistantSyncInfoPersistence : NSObject

+ (id)infoDictionary;
+ (id)filePath;
+ (void)saveValue:(id)a0 forKey:(id)a1;
+ (id)valueForKey:(id)a0;
+ (id)stringForKey:(id)a0;
+ (BOOL)saveFileForDictionary:(id)a0;
+ (void)saveString:(id)a0 forKey:(id)a1;

@end
