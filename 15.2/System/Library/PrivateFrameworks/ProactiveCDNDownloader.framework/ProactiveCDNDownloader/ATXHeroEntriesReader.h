@interface ATXHeroEntriesReader : NSObject

+ (id)appAndClipEntryFromPbEntries:(id)a0 position:(unsigned long long)a1;
+ (id)loadAppAndClipEntriesFromData:(id)a0;
+ (id)loadAppAndClipEntriesFromFileURL:(id)a0;
+ (BOOL)validateReader:(id)a0 pbEntries:(id)a1;

@end
