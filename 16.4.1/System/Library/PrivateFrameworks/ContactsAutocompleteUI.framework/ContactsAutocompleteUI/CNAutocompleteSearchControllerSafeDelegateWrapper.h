@class NSString;
@protocol CNAutocompleteSearchControllerInternalDelegate;

@interface CNAutocompleteSearchControllerSafeDelegateWrapper : NSObject <CNAutocompleteSearchControllerInternalDelegate> {
    struct { unsigned char didAddRecipient : 1; unsigned char didRemoveRecipient : 1; unsigned char composeRecipientForAddress : 1; unsigned char willShowResultsView : 1; unsigned char didShowResultsView : 1; unsigned char willHideResultsView : 1; unsigned char didHideResultsView : 1; unsigned char presentationOptionsForRecipient : 1; unsigned char preferredRecipientForRecipient : 1; unsigned char tintColorForRecipient : 1; unsigned char textViewWillChangeSize : 1; unsigned char textViewDidChangeSize : 1; unsigned char didTapTextViewAccessoryButtonForSearchController : 1; unsigned char didTapTextViewAccessoryButtonForSearchControllerAnchoredToView : 1; unsigned char didTapTableAccessoryForRecipient : 1; unsigned char contextMenuConfigurationForRecipient : 1; unsigned char supplementalGroupsForSearchQuery : 1; unsigned char imageDataForRecipient : 1; unsigned char willDisplayRow : 1; unsigned char didEndDisplayingRow : 1; } _delegateFlags;
}

@property (weak, nonatomic) id<CNAutocompleteSearchControllerInternalDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)log;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)a0;
- (void)didTapTextViewAccessoryButtonForSearchController:(id)a0 anchoredToView:(id)a1;
- (id)searchController:(id)a0 composeRecipientForAddress:(id)a1;
- (id)searchController:(id)a0 contextMenuConfigurationForRecipient:(id)a1;
- (void)searchController:(id)a0 didAddRecipient:(id)a1;
- (void)searchController:(id)a0 didEndDisplayingRowForRecipient:(id)a1;
- (void)searchController:(id)a0 didRemoveRecipient:(id)a1;
- (void)searchController:(id)a0 didTapTableAccessoryForRecipient:(id)a1;
- (BOOL)searchController:(id)a0 imageDataForRecipient:(id)a1 imageUpdateBlock:(id /* block */)a2;
- (id)searchController:(id)a0 preferredRecipientForRecipient:(id)a1;
- (unsigned long long)searchController:(id)a0 presentationOptionsForRecipient:(id)a1;
- (id)searchController:(id)a0 tintColorForRecipient:(id)a1;
- (void)searchController:(id)a0 willDisplayRowForRecipient:(id)a1;
- (void)searchController:(id)a0 didHideResultsView:(id)a1;
- (void)searchController:(id)a0 didShowResultsView:(id)a1;
- (BOOL)searchController:(id)a0 supplementalGroupsForSearchQuery:(id)a1 completionHandler:(id /* block */)a2;
- (void)searchController:(id)a0 textViewDidChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)searchController:(id)a0 textViewWillChangeSize:(struct CGSize { double x0; double x1; })a1;
- (void)searchController:(id)a0 willHideResultsView:(id)a1;
- (void)searchController:(id)a0 willShowResultsView:(id)a1;

@end
