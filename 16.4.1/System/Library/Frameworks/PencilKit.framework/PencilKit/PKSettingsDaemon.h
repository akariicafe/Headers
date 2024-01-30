@interface PKSettingsDaemon : NSObject

+ (void)setPrefersPencilOnlyDrawing:(BOOL)a0;
+ (void)_dispatchWithErrorHandler:(id /* block */)a0 successHandler:(id /* block */)a1;
+ (id)daemonQueue;
+ (void)openPencilPreferences;
+ (BOOL)prefersPencilHoverPreviewEnabled;
+ (void)prewarmServiceConnectionIfNeeded;
+ (void)setCurrentScribbleLanguageIdentifiers:(id)a0;
+ (void)setPrefersPencilHoverPreviewEnabled:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
