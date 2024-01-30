@class CNContactSuggestionViewController;

@interface CNPropertySuggestionAction : CNPropertyAction

@property (retain, nonatomic) CNContactSuggestionViewController *suggestionViewController;
@property (nonatomic) long long selectedChoice;

- (void)reject;
- (void).cxx_destruct;
- (void)confirm;
- (BOOL)_confirmOrReject:(BOOL)a0;
- (BOOL)_confirmOrRejectDonation:(BOOL)a0;
- (BOOL)_confirmOrRejectSuggestion:(BOOL)a0;
- (id)dataSourceWithPropertyItem:(id)a0;
- (void)performActionForItem:(id)a0 sender:(id)a1;

@end
