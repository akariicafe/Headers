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
- (void)setCancelled:(BOOL)a0;
- (void)setAttributedSubtitle:(id)a0;
- (id)subtitle;
- (void)setNavigationTitle:(id)a0;
- (id)attributedSubtitle;
- (void)setDelegate:(id)a0;
- (BOOL)isCancelled;
- (id)navigationTitle;
- (void)setSubtitle:(id)a0;
- (void)setConfirmed:(BOOL)a0;
- (void).cxx_destruct;
- (void)setRequestContext:(id)a0;
- (BOOL)isConfirmed;
- (id)snippet;
- (void)setSnippet:(id)a0;
- (void)wasAddedToTranscript;
- (void)siriDidDeactivate;
- (BOOL)usePlatterStyle;
- (id)snippetPunchOut;
- (id)_backingSnippetViewController;
- (id)_legacyCardSectionViewController;
- (void)_setVirgin:(BOOL)a0;
- (BOOL)cardViewController:(id)a0 shouldLoadIdentifiedCardSectionViewProvidersWithProviderManager:(id)a1;
- (void)cardViewControllerDidLoad:(id)a0;
- (void)configureContentWithSizeClass:(long long)a0;
- (void)endEditingAndCorrect:(BOOL)a0;
- (id)headerPunchOut;
- (id)initWithSnippet:(id)a0;
- (BOOL)isFullPadWidth;
- (BOOL)removedAfterDialogProgresses;
- (id)sashItem;
- (void)setHeaderPunchOut:(id)a0;
- (void)setIsFullPadWidth:(BOOL)a0;
- (void)setSnippetPunchOut:(id)a0;
- (void)setWantsConfirmationInsets:(BOOL)a0;
- (void)siriDidLayoutSnippetView;
- (void)siriWillLayoutSnippetView;
- (Class)transparentHeaderViewClass;
- (BOOL)wantsConfirmationInsets;
- (BOOL)wantsToManageBackgroundColor;
- (void)willCancel;
- (void)willConfirm;

@end
