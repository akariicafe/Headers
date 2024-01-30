@interface PKSettingsDaemon : NSObject

+ (void)setPrefersPencilOnlyDrawing:(BOOL)a0;
+ (void)setCurrentScribbleLanguageIdentifiers:(id)a0;
+ (id)daemonQueue;
+ (void)openPencilPreferences;

@end
