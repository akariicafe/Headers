@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
}

@property (copy, nonatomic) id /* block */ languageUpdated;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldCacheObject:(id)a0;
- (void)dealloc;
- (void)languagesChanged:(id)a0;
- (void)languagePulled:(id)a0;
- (void)willLoadLanguage:(id)a0;
- (void)noteObject:(id)a0 forLanguage:(id)a1;

@end
