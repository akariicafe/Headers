@class CompletionArrowView;

@interface SearchSuggestionTableViewCell : CompletionListTableViewCell {
    CompletionArrowView *_accessoryView;
}

@property (nonatomic) BOOL hidesImage;
@property (nonatomic) BOOL hidesAccessoryView;
@property (copy, nonatomic) id /* block */ accessoryActionHandler;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_accessoryButtonTapped:(id)a0;

@end
