@class UIImageView;

@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImageView *newlyAddedView;
@property (nonatomic) BOOL showNewlyAdded;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)_dotImage;

@end
