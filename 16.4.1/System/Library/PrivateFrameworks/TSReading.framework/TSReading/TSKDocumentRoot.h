@class TSSTheme, NSDictionary, NSLocale, NSObject, UIViewController, NSMutableArray, TSKAccessController, TSKPasteboardController, NSString, TSKChangeNotifier, TSKDocumentSupport, TSSStylesheet, TSKAnnotationAuthorStorage;
@protocol TSKDocumentViewController, TSKSearchReference, OS_dispatch_queue, TSKUndoRedoState;

@interface TSKDocumentRoot : TSPObject <TSKAccessControllerDelegate, TSKModel, TSKSearchTargetProvider> {
    NSObject<OS_dispatch_queue> *_iCloudTeardownStackQueue;
    NSMutableArray *_iCloudTeardownStack;
}

@property (readonly, nonatomic) UIViewController<TSKDocumentViewController> *viewController;
@property (retain, nonatomic) TSSTheme *theme;
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) TSKPasteboardController *pasteboardController;
@property (readonly, nonatomic) TSKDocumentSupport *documentSupport;
@property (readonly, nonatomic) TSKAccessController *accessController;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (readonly, nonatomic) unsigned long long applicationType;
@property (nonatomic, getter=isFindActive) BOOL findActive;
@property (readonly, nonatomic) NSString *creationLanguage;
@property (readonly, nonatomic) unsigned long long writingDirection;
@property (retain, nonatomic) id<TSKUndoRedoState> undoRedoState;
@property (retain, nonatomic) TSKAnnotationAuthorStorage *annotationAuthorStorage;
@property (readonly, nonatomic) BOOL isBeingLocalized;
@property (retain, nonatomic) NSObject<TSKSearchReference> *activeSearchReference;
@property (retain, nonatomic) NSDictionary *searchReferencesToHighlight;
@property (readonly, nonatomic) BOOL hasICloudConflict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)commandControllerClass;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (BOOL)shouldHyphenate;
- (void)documentDidLoad;
- (struct __CFLocale { } *)hyphenationLocale;
- (id)modelEnumerator;
- (long long)addObserverForICloudTeardownWithBlock:(id /* block */)a0;
- (id)additionalDocumentPropertiesForWrite;
- (void)changeDocumentCacheFileProtection:(id)a0;
- (id)changeSessionManagerForModel:(id)a0;
- (id)changeVisibility;
- (void)coalesceChanges:(id)a0;
- (id)commandForPropagatingPresetChangeCommand:(id)a0 alwaysPreserveAppearance:(BOOL)a1;
- (id)dataFromDocumentCachePath:(id)a0;
- (void)didSaveWithEncryptionChange;
- (BOOL)documentCacheHasAtMostFileProtection:(id)a0;
- (BOOL)documentDisallowsHighlightsOnStorage:(id)a0;
- (id)documentFonts;
- (void)enumerateStyleClientsUsingBlock:(id /* block */)a0;
- (BOOL)hasICloudTeardownObserver;
- (BOOL)isDirectionRightToLeft;
- (void)markAsModifiedIfLocaleIsOutOfDate;
- (id)modelEnumeratorForObjectsConformingToProtocol:(id)a0;
- (id)modelEnumeratorForObjectsOfClass:(Class)a0;
- (id)modelEnumeratorForObjectsPassingTest:(id /* block */)a0;
- (id)modelEnumeratorForObjectsRespondingToSelector:(SEL)a0;
- (id)modelEnumeratorWithFlags:(unsigned long long)a0;
- (struct CGImageSource { } *)newImageSourceForDocumentCachePath:(id)a0;
- (unsigned long long)nextRootSearchTargetIndexFromIndex:(unsigned long long)a0 forString:(id)a1 options:(unsigned long long)a2 inDirection:(unsigned long long)a3;
- (void)notifyICloudTeardownObservers;
- (void)removeICloudTeardownObserver:(long long)a0;
- (unsigned long long)rootSearchTargetCountThroughIndex:(unsigned long long)a0;
- (void)setThemeForTemplateImport:(id)a0;
- (id)unavailableDocumentFonts;
- (id)uniqueDocumentCachePathForProposedPath:(id)a0;
- (void)updateForNonCommandChangesWithWriteLock:(id)a0;
- (BOOL)useLigatures;
- (void)withRootSearchTargetAtIndex:(unsigned long long)a0 executeBlock:(id /* block */)a1;
- (BOOL)writeData:(id)a0 atDocumentCachePath:(id)a1;

@end
