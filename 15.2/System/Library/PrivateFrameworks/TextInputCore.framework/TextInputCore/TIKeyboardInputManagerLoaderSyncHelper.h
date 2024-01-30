@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
}

@property (copy, nonatomic) id /* block */ languageUpdated;

- (void)willLoadLanguage:(id)a0;
- (BOOL)shouldCacheObject:(id)a0;
- (void)languagePulled:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)noteObject:(id)a0 forLanguage:(id)a1;
- (void)dealloc;
- (void)languagesChanged:(id)a0;

@end
