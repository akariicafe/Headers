@class NSString, SYNotesActivationObserver, SYLinkContextClient, NSCache;
@protocol WBSSystemNoteTakingControllerDelegate;

@interface WBSSystemNoteTakingController : NSObject <SYLinkContextClientDelegate> {
    SYLinkContextClient *_linkContextClient;
    NSCache *_cachedCanonicalURLStringForWebPageURLString;
    SYNotesActivationObserver *_notesActivationObserver;
}

@property (readonly, nonatomic, getter=_isSystemNoteTakingEnabledForSafari) BOOL systemNoteTakingEnabledForSafari;
@property (weak, nonatomic) id<WBSSystemNoteTakingControllerDelegate> delegate;
@property (readonly, nonatomic) BOOL isNotesPIPVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_insertLinkContextInfo:(id)a0 userActivity:(id)a1;
- (void)_insertLinkContextPreview:(id)a0 userActivity:(id)a1;
- (BOOL)_isSystemNoteTakingEnabled;
- (void)_setUpNotesVisibilityObserver;
- (void)_updateNotesPIPVisibility:(BOOL)a0;
- (void)applyHighlightInUserActivity:(id)a0 webView:(id)a1;
- (void)cacheCanonicalURL:(id)a0 forWebPageURL:(id)a1;
- (void)fetchHighlightsForUserActivity:(id)a0 privateBrowsing:(BOOL)a1 completion:(id /* block */)a2;
- (void)insertCanonicalURLIfAvailableForUserActivity:(id)a0;
- (BOOL)isNoteTakingSupportedWithPrivateBrowsing:(BOOL)a0;
- (void)saveHighlightsData:(id)a0 selectedText:(id)a1 selectedImage:(id)a2 newGroup:(BOOL)a3 originatedInApp:(BOOL)a4 webView:(id)a5 userActivity:(id)a6;
- (id)userActivityForNoteTaking:(id)a0;
- (void)userWillAddLinkWithActivity:(id)a0 completion:(id /* block */)a1;

@end
