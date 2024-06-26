@class MFComposeImageSizeView, MFComposeSubjectView, MFComposeMultiView, MFComposeWebContentVariationView, NSObject, MFMessageContentLoadingView, UIViewController, CNAutocompleteResultsTableViewController, MFComposeWebView, UIScrollView, MFMailComposeRecipientTextView, NSString, UIView, MFComposeFromView, MFMailComposeContactsSearchController, NSMutableArray, UIResponder, MFMailComposeToField, MFComposeDisplayMetrics, NSInvocation;
@protocol MFMailComposeToFieldDelegate, OS_os_log, MFMailComposeRecipientTextViewDelegate, ComposeViewNavigationBarDelegate, MFMailComposeViewDelegate;

@interface MFMailComposeView : UITransitionView <CNComposeHeaderViewDelegate, CNAutocompleteResultsTableViewControllerDelegate, CNComposeDragSourceDelegate, CNComposeDropTargetDelegate, MFComposeMultiViewDelegate, MFComposeWebViewDelegate, UIPopoverControllerDelegate, MFComposeFromViewDelegate, EFLoggable, UIScrollViewDelegate, MFMailComposeContactsSearchControllerDelegate> {
    UIView *_headerView;
    UIView *_contentView;
    UIView *_shadowView;
    MFMailComposeRecipientTextView *_lastChangedRecipientView;
    MFMailComposeRecipientTextView *_activeRecipientView;
    BOOL _completedCCAndBCCFieldSetup;
    MFComposeWebView *_webView;
    MFMessageContentLoadingView *_loadingView;
    BOOL _isDragging;
    NSMutableArray *_pendingDropRecipients;
    UIResponder *_firstResponderBeforeSheet;
    UIResponder *_pinningResponder;
    NSInvocation *_delayedPopoverInvocation;
    CNAutocompleteResultsTableViewController *_corecipientsSearchViewController;
    UIView *_corecipientsSearchTableViewSeparator;
    double _offsetBeforeSearch;
    double _keyboardIntersection;
    unsigned long long _options;
    struct CGSize { double width; double height; } _currentContentSize;
    unsigned long long _notifyingBodyField;
    unsigned char _isChangingRecipients : 1;
    unsigned char _isLoading : 1;
    unsigned char _isSending : 1;
    unsigned char _isShowingPeoplePicker : 1;
    unsigned char _isLoadingFromAddress : 1;
    unsigned char _isReplyToHME : 1;
    unsigned char _isRotating : 1;
    unsigned char _isClosing : 1;
    unsigned char _isForEditing : 1;
    unsigned char _isAnimationDisabled : 1;
    unsigned char _isDisambiguating : 1;
    unsigned char _shouldShowOptionalHeaders : 1;
    unsigned char _hasAppeared : 1;
    unsigned char _corecipientsTableVisible : 1;
}

@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) MFComposeDisplayMetrics *displayMetrics;
@property (weak, nonatomic) id<MFMailComposeViewDelegate> composeViewDelegate;
@property (weak, nonatomic) id<MFMailComposeRecipientTextViewDelegate> composeRecipientDelegate;
@property (weak, nonatomic) UIViewController *popoverOwner;
@property (weak, nonatomic) id<MFMailComposeToFieldDelegate> toFieldDelegate;
@property (weak, nonatomic) id<ComposeViewNavigationBarDelegate> navigationBarDelegate;
@property (nonatomic) BOOL isForEditing;
@property (nonatomic, getter=isAnimationDisabled) BOOL animationDisabled;
@property (nonatomic, getter=isChangingRecipients) BOOL changingRecipients;
@property (nonatomic, getter=isShowingPeoplePicker) BOOL showingPeoplePicker;
@property (nonatomic, getter=isLoadingFromAddress) BOOL loadingFromAddress;
@property (nonatomic, getter=isReplyToHME) BOOL replyToHME;
@property (nonatomic, getter=isSending) BOOL sending;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (readonly, nonatomic, getter=isSearching) BOOL searching;
@property (readonly, nonatomic) MFMailComposeToField *toField;
@property (readonly, nonatomic) MFMailComposeRecipientTextView *ccField;
@property (readonly, nonatomic) MFMailComposeRecipientTextView *bccField;
@property (readonly, nonatomic) MFComposeSubjectView *subjectField;
@property (readonly, nonatomic) MFComposeFromView *fromField;
@property (readonly, nonatomic) MFComposeImageSizeView *imageSizeField;
@property (readonly, nonatomic) MFComposeMultiView *multiField;
@property (readonly, nonatomic) MFComposeWebView *composeWebView;
@property (readonly, nonatomic) MFComposeWebContentVariationView *webContentVariationField;
@property (readonly, nonatomic) UIScrollView *bodyScroller;
@property (readonly, nonatomic) MFMailComposeContactsSearchController *searchController;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *searchViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_normalizeBodyFieldFrame;
- (void)_multiFieldClicked;
- (void)resetContentSize;
- (void)_createImageSizeFieldIfNeededAndAddSubview:(BOOL)a0;
- (void)_updateKeyboardIntersection:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutMarginsDidChange;
- (void)layoutSubviews;
- (void)_setHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateOptionalHeaderVisibility;
- (void)beginSearchForText:(id)a0 recipientView:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_layoutSubviews:(BOOL)a0 changingView:(id)a1 toSize:(struct CGSize { double x0; double x1; })a2;
- (void)_presentDelayedPopover;
- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (id)_focusedRecipientView;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)dropTarget:(id)a0 didDropDragItems:(id)a1 atPoint:(struct CGPoint { double x0; double x1; })a2;
- (id)dragSource:(id)a0 localObjectForDraggableItem:(id)a1;
- (void)menuDidHide;
- (id)recipientTextViewForComposeMultiView:(id)a0;
- (void)_endBlockingBodyScroll;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)toggleImageSizeFieldIfNecessary;
- (void)setAutoresizingMask:(unsigned long long)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)composeContactsSearchController:(id)a0 finishedWithResults:(BOOL)a1;
- (void)composeContactsSearchController:(id)a0 didSortResults:(id)a1;
- (BOOL)_userInterfaceConfigurationSupportsCorecipientsTableView;
- (void)composeContactsSearchController:(id)a0 didFindCorecipients:(id)a1;
- (BOOL)presentSearchResults:(id)a0;
- (void)composeWebViewTextChanged:(id)a0;
- (void)viewDidBecomeFirstResponder:(id)a0;
- (void)_adjustScrollerForBottomView;
- (id)dragSource:(id)a0 suggestedNameForDraggableItem:(id)a1;
- (void)_setupField:(id)a0 withLabel:(id)a1 navTitle:(id)a2;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_setupBodyFieldWithHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 enclosingFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 changingView:(id)a2 frameToPin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 wasSearching:(BOOL)a4;
- (void)automaticKeyboardFinishedAppearing:(id)a0;
- (void)_updateTextViewOriginWithHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setCorecipientsTableViewVisible:(BOOL)a0 withFieldFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_cancelAnimations;
- (id)sendingAccountProxyForComposeContactsSearchController:(id)a0;
- (void)parentDidClose;
- (void)scrollToTopAnimated:(BOOL)a0;
- (void)disambiguateRecipient:(id)a0 recipientView:(id)a1;
- (void)_updateMultiField;
- (BOOL)shouldScrollLastChangedRecipientViewToTop;
- (void)_updateOptionalHeaderVisibilityForceVisible:(BOOL)a0;
- (void)findCorecipientsWithRecipientView:(id)a0;
- (void)restoreFirstResponderWithKeyboardPinning:(BOOL)a0;
- (void)selectNextSearchResult;
- (void)_cancelDelayedPopover;
- (BOOL)_presentsSearchResultsTableAsPopover;
- (void)_beginBlockingBodyScroll;
- (void)_revealSelection;
- (void)dropTarget:(id)a0 dragEnteredAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)selectPreviousSearchResult;
- (void)_createCCAndBCCFieldIfNeededAndCompleteSetup:(BOOL)a0;
- (id)dragSource:(id)a0 draggableItemsAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)cancelDelayedPopover;
- (void)saveFirstResponder;
- (void)_adjustScrollerContentSize;
- (void)searchResultsPopoverWasDismissed;
- (void)_displayMetricsDidChange;
- (BOOL)isSearchResultsPopoverVisible;
- (BOOL)isKeyboardVisible;
- (id)_searchResultsTable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 options:(unsigned long long)a1;
- (void)_layoutSubviews:(BOOL)a0;
- (void)didAppear;
- (void)_finishUpRotationToInterfaceOrientation:(long long)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (BOOL)chooseSelectedSearchResult;
- (id)dragSource:(id)a0 targetedPreviewForDraggableItem:(id)a1;
- (void).cxx_destruct;
- (void)composeFromView:(id)a0 didSelectAddress:(id)a1;
- (void)scrollToRecipientTextView:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (double)_verticalPadding;
- (void)autocompleteResultsController:(id)a0 didAskToRemoveRecipient:(id)a1;
- (void)scrollViewDidScroll:(id)a0;
- (void)_updateQuoteLevelMenu;
- (void)setScrollsToTop:(BOOL)a0;
- (void)_updateTextViewHeightWithHeaderFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)dropTargetDragExited:(id)a0;
- (void)_layoutLoadingView;
- (void)focusFirstResponderAfterRecipientView:(id)a0;
- (void)automaticKeyboardFinishedDisappearing:(id)a0;
- (double)_heightForBottomView;
- (void)dismissSearchResultsIfDisambiguating;
- (void)_setShadowViewVisible:(BOOL)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)_collectKeyViews:(id)a0;
- (void)saveFirstResponderWithKeyboardPinning:(BOOL)a0;
- (BOOL)endEditing:(BOOL)a0;
- (void)_layoutComposeHeaderViewsWithChangingHeader:(id)a0 toSize:(struct CGSize { double x0; double x1; })a1 withPinFrame:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)parentWillClose;
- (void)setKeyboardVisible:(BOOL)a0 animate:(BOOL)a1;
- (void)composeHeaderViewClicked:(id)a0;
- (void)dropTarget:(id)a0 dragDidMoveToPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)_updateFromField;
- (void)removeFromSuperview;
- (void)_revealSelectionIfNeededWithChangingView:(id)a0;
- (BOOL)_shouldShowCorecipientsTableView;
- (void)restoreFirstResponder;
- (void)_dropItems:(id)a0 recipientTextView:(id)a1;
- (BOOL)dragSource:(id)a0 sessionAllowsMoveOperation:(id)a1;
- (void)clearSearchForRecipientView:(id)a0 reflow:(BOOL)a1 clear:(BOOL)a2;
- (void)_setUpContentView;
- (void)dealloc;
- (void)clearSearchForActiveRecipientView;
- (void)dismissSearchResults;
- (struct CGPoint { double x0; double x1; })_headerViewOriginWithScrollViewOffsetCalculation;
- (void)dragSource:(id)a0 willEndInteractionWithItems:(id)a1 dropOperation:(unsigned long long)a2;
- (void)layoutForChangedComposeHeaderView:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
- (void)_layoutSubviewsWithActiveRecipientView:(BOOL)a0 changingView:(id)a1 toSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)presentSearchResults;
- (void)didIgnoreSearchResults;
- (void)_layoutSubviews:(BOOL)a0 changingView:(id)a1 toSize:(struct CGSize { double x0; double x1; })a2 searchResultsWereDismissed:(BOOL)a3;
- (void)invalidateSearchResultRecipient:(id)a0;
- (void)_setDragging:(BOOL)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_headerFrame;
- (void)_adjustHeaderFieldsPreferredContentSize;
- (id)_corecipientResultsTable;
- (void)_beginPreventingScrollingToRevealSelection;
- (void)_endPreventingScrollingToRevealSelection;
- (void)willDisappear;
- (void)cancelSearch;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void)setRecipientFieldsEditable:(BOOL)a0 animated:(BOOL)a1;

@end
