@class UIColor, JSContext, JSManagedValue, NSMutableArray;

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
@property (readonly, nonatomic) UIColor *defaultBackgroundColor;
@property (readonly, nonatomic) UIColor *defaultForegroundColor;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (BOOL)didChangeLine:(unsigned long long)a0 string:(id)a1;
- (void)didRemoveLineAtIndex:(unsigned long long)a0;
- (void)didAddLineAtIndex:(unsigned long long)a0;
- (void)highlightAllTokensWithCallback:(id /* block */)a0;
- (id)configurationFilesForAppearance:(unsigned long long)a0;
- (void)discardManagedReferencesForLineNumber:(unsigned long long)a0;
- (void)loadPlugins;
- (void)reloadPlugins;
- (void)unloadPlugins;
- (id)loadPluginUsingConfigWithModuleName:(id)a0 module:(id)a1;
- (void)loadColorSchemePlugin;
- (void)loadHighlightingPlugin;
- (void)loadSyntaxPlugin;

@end
