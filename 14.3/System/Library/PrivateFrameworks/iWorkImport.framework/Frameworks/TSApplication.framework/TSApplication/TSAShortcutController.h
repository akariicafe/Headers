@class TSURetainedPointerKeyDictionary, NSMutableDictionary, TSADocumentRoot;

@interface TSAShortcutController : TSPObject {
    NSMutableDictionary *_shortcutToStyleDictionary;
    TSURetainedPointerKeyDictionary *_styleToShortcutDictionary;
}

@property (nonatomic) TSADocumentRoot *documentRoot;
@property (readonly, nonatomic) BOOL hasShortcuts;

+ (id)localizedStringForShortcut:(id)a0;

- (void)dealloc;
- (id)initWithDocumentRoot:(id)a0;
- (void)documentDidLoad;
- (void)documentWillUnload;
- (void)loadFromArchive:(const struct ShortcutControllerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 unarchiver:(id)a1;
- (void)saveToArchive:(struct ShortcutControllerArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct RepeatedPtrField<TSA::ShortcutControllerArchive_ShortcutMapEntry> { struct Arena *x0; int x1; int x2; struct Rep *x3; } x4; } *)a0 archiver:(id)a1;
- (void)loadFromUnarchiver:(id)a0;
- (void)saveToArchiver:(id)a0;
- (id)styleForShortcut:(id)a0;
- (id)shortcutForStyle:(id)a0;
- (void)setStyle:(id)a0 forShortcut:(id)a1;
- (void)removeStylesNotInTheme;

@end
