@class TSURetainedPointerKeyDictionary, NSMutableDictionary, TSADocumentRoot;

@interface TSAShortcutController : TSPObject {
    NSMutableDictionary *_shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary *_styleToShortcutDictionary;
}

@property (weak, nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) BOOL hasShortcuts;

+ (id)localizedStringForShortcut:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (void)documentDidLoad;
- (void)documentWillUnload;
- (id)initWithDocumentRoot:(id)a0;
- (void)loadFromArchive:(const void *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(void *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)styleForShortcut:(id)a0;
- (id)shortcutForStyle:(id)a0;
- (void)setStyle:(id)a0 forShortcut:(id)a1;
- (void)removeStylesNotInTheme;

@end
