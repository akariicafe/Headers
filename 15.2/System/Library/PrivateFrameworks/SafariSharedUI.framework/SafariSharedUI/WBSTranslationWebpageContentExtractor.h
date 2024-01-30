@class NSString, WKWebView, NSMutableArray;
@protocol WBSTranslationContentFillingDelegate, WBSTranslationContentExtractionDelegate;

@interface WBSTranslationWebpageContentExtractor : NSObject <_WKTextManipulationDelegate, WBSTranslationContentExtracting, WBSTranslationContentFilling> {
    BOOL _currentlyExtractingContent;
    BOOL _needsHTMLLangAttributeUpdate;
    WKWebView *_webView;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _replaceItemsLock;
    NSMutableArray *_replaceItemsQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WBSTranslationContentExtractionDelegate> extractionDelegate;
@property (weak, nonatomic) id<WBSTranslationContentFillingDelegate> fillingDelegate;

- (id)initWithWebView:(id)a0;
- (void).cxx_destruct;
- (void)_webView:(id)a0 didFindTextManipulationItems:(id)a1;
- (void)_webView:(id)a0 didFindTextManipulationItem:(id)a1;
- (id)_textManipulationConfiguration;
- (void)_scheduleReplaceItemsWithTargetLocale:(id)a0;
- (void)_updateHTMLLanguageAttributesIfNeeded:(id)a0;
- (void)_replaceItemsWithSignpostID:(unsigned long long)a0;
- (void)beginExtractingContent;
- (void)stopExtractingContent;
- (void)replaceExtractedContent:(id)a0 withTranslatedContent:(id)a1 targetLocale:(id)a2;

@end
