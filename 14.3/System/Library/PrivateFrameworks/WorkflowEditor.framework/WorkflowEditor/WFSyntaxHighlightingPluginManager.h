@class JSManagedValue, NSMutableArray, JSContext;

@interface WFSyntaxHighlightingPluginManager : NSObject {
    JSContext *_context;
    NSMutableArray *_tokenLines;
    unsigned long long _minimumChangedLine;
    unsigned long long _maxChangedLine;
    JSManagedValue *_colorScheme;
    JSManagedValue *_highlightingPlugin;
    JSManagedValue *_syntaxPlugin;
}

@property (nonatomic) unsigned long long syntaxHighlightingType;
@property (nonatomic) unsigned long long syntaxHighlightingAppearance;

- (id)defaultBackgroundColor;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)configurationFilesForAppearance:(unsigned long long)a0;
- (void)didAddLineAtIndex:(unsigned long long)a0;
- (void)didRemoveLineAtIndex:(unsigned long long)a0;
- (BOOL)didChangeLine:(unsigned long long)a0 string:(id)a1;
- (void)discardManagedReferencesForLineNumber:(unsigned long long)a0;
- (void)highlightAllTokensWithCallback:(id /* block */)a0;
- (void)loadPlugins;
- (void)reloadPlugins;
- (void)unloadPlugins;
- (id)loadPluginUsingConfigWithModuleName:(id)a0 module:(id)a1;
- (void)loadColorSchemePlugin;
- (void)loadHighlightingPlugin;
- (void)loadSyntaxPlugin;
- (id)defaultForegroundColor;

@end
