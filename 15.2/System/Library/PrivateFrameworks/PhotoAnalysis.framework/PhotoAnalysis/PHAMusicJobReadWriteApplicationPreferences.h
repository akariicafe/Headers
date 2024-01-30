@interface PHAMusicJobReadWriteApplicationPreferences : NSObject

+ (void)updateLibraryScopedMusicWorkerPreferencesWithEntriesFromDictionary:(id)a0 keysToRemove:(id)a1 photoLibrary:(id)a2;
+ (id)libraryScopedMusicWorkerPreferencesForLibrary:(id)a0;

@end
