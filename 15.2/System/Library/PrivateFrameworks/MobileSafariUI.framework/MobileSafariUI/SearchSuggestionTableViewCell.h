@class CompletionArrowView;

@interface SearchSuggestionTableViewCell : CompletionListTableViewCell {
    CompletionArrowView *_accessoryView;
}

@property (nonatomic) BOOL hidesImage;
@property (nonatomic) BOOL hidesAccessoryView;

+ (void)cachedImageForDefaultSearchProvider:(id /* block */)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;

@end
