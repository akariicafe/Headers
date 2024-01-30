@class PXRecipientSearchDataSource, UIView, NSString, CNContactViewController, PXRecipientSearchDataSourceManager, CNAutocompleteResultsTableViewController, CNComposeRecipient;
@protocol PXSearchRecipientControllerDelegate;

@interface PXSearchRecipientController : NSObject <CNAutocompleteResultsTableViewControllerDelegate, PXSectionedDataSourceManagerObserver> {
    struct { BOOL didSelectRecipient; BOOL searchStateDidChange; BOOL numberOfSearchRecipientsDidChange; } _delegateRespondsTo;
}

@property (retain, nonatomic, setter=_setSearchDataSource:) PXRecipientSearchDataSource *_searchDataSource;
@property (nonatomic) long long searchState;
@property (nonatomic) unsigned long long numberOfSearchRecipients;
@property (readonly, nonatomic) BOOL _searchHasNoResultsFound;
@property (readonly, nonatomic) CNAutocompleteResultsTableViewController *_searchResultsTableViewController;
@property (retain, nonatomic) CNComposeRecipient *suggestedRecipientBeingViewed;
@property (weak, nonatomic) CNContactViewController *_contactViewController;
@property (weak, nonatomic) id<PXSearchRecipientControllerDelegate> delegate;
@property (readonly, nonatomic) PXRecipientSearchDataSourceManager *searchDataSourceManager;
@property (readonly, nonatomic) UIView *searchResultsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)autocompleteResultsController:(id)a0 didRequestInfoAboutRecipient:(id)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)autocompleteResultsController:(id)a0 didSelectRecipient:(id)a1 atIndex:(unsigned long long)a2;
- (void).cxx_destruct;
- (void)autocompleteResultsController:(id)a0 tintColorForRecipient:(id)a1 completion:(id /* block */)a2;
- (void)_removeRecent;
- (id)_contactViewControllerForRecipient:(id)a0;
- (id)_validationTextColorForSearchResult:(id)a0;
- (void)disambiguateRecipient:(id)a0;
- (id)initWithSearchDataSourceManager:(id)a0;

@end
