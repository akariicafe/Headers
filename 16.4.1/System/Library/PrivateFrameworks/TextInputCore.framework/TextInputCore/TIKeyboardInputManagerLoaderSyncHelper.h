@class NSMutableDictionary, NSMapTable;

@interface TIKeyboardInputManagerLoaderSyncHelper : NSObject {
    NSMutableDictionary *_languages;
    NSMapTable *_pendingSaves;
}

@property (copy, nonatomic) id /* block */ languageUpdated;

- (void)languagesChanged:(id)a0;
- (void)willLoadLanguage:(id)a0;
- (void)dealloc;
- (void)noteObject:(id)a0 forLanguage:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldCacheObject:(id)a0;
- (void)languagePulled:(id)a0;

@end
