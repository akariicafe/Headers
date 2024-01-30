@class CNContactSuggestionViewController;

@interface CNPropertySuggestionAction : CNPropertyAction

@property (retain, nonatomic) CNContactSuggestionViewController *suggestionViewController;
@property (nonatomic) long long selectedChoice;

- (void)reject;
- (void)confirm;
- (void)performActionForItem:(id)a0 sender:(id)a1;
- (BOOL)_confirmOrReject:(BOOL)a0;
- (void).cxx_destruct;
- (id)dataSourceWithPropertyItem:(id)a0;
- (BOOL)_confirmOrRejectSuggestion:(BOOL)a0;
- (BOOL)_confirmOrRejectDonation:(BOOL)a0;

@end
