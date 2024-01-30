@class CNContactSuggestionViewController;

@interface CNPropertySuggestionAction : CNPropertyAction

@property (retain, nonatomic) CNContactSuggestionViewController *suggestionViewController;
@property (nonatomic) long long selectedChoice;

- (void)confirm;
- (id)dataSourceWithPropertyItem:(id)a0;
- (BOOL)_confirmOrRejectSuggestion:(BOOL)a0;
- (BOOL)_confirmOrRejectDonation:(BOOL)a0;
- (void).cxx_destruct;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (void)reject;
- (BOOL)_confirmOrReject:(BOOL)a0;

@end
