@interface PSSearchResultsCell : UITableViewCell

@property (nonatomic) BOOL shouldIndentContent;
@property (nonatomic) BOOL shouldIndentSeparator;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;

@end
