@class NSString, SAUISnippet;

@interface SiriUILegacyCardSnippetViewController : SiriUICardSnippetViewController <SiriUISizeClassConfiguring> {
    SAUISnippet *_snippet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (id)requestContext;
- (BOOL)isConfirmed;
- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)setRequestContext:(id)a0;
- (id)snippet;
- (void)setCancelled:(BOOL)a0;
- (id)subtitle;
- (id)navigationTitle;
- (void)setSnippet:(id)a0;
- (void)setSubtitle:(id)a0;
- (void)setDelegate:(id)a0;
- (void)setNavigationTitle:(id)a0;
- (void)setConfirmed:(BOOL)a0;
- (id)sashItem;
- (id)initWithSnippet:(id)a0;
- (BOOL)usePlatterStyle;
- (void)siriWillActivateFromSource:(long long)a0;
- (void)siriDidDeactivate;
- (void)wasAddedToTranscript;
- (void)endEditingAndCorrect:(BOOL)a0;
- (BOOL)removedAfterDialogProgresses;
- (void)_setVirgin:(BOOL)a0;
- (void)willCancel;
- (void)willConfirm;
- (Class)transparentHeaderViewClass;
- (void)cardViewControllerDidLoad:(id)a0;
- (BOOL)cardViewController:(id)a0 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)a1;
- (void)configureContentWithSizeClass:(long long)a0;
- (void)siriWillLayoutSnippetView;
- (void)siriDidLayoutSnippetView;
- (id)snippetPunchOut;
- (id)headerPunchOut;
- (void)setWantsConfirmationInsets:(BOOL)a0;
- (BOOL)wantsConfirmationInsets;
- (void)setAttributedSubtitle:(id)a0;
- (id)attributedSubtitle;
- (BOOL)wantsToManageBackgroundColor;
- (void)setHeaderPunchOut:(id)a0;
- (void)setSnippetPunchOut:(id)a0;
- (BOOL)isFullPadWidth;
- (void)setIsFullPadWidth:(BOOL)a0;
- (id)_legacyCardSectionViewController;
- (id)_backingSnippetViewController;

@end
