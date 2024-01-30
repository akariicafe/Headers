@class UIImageView;

@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *newlyAddedView;
@property (nonatomic) BOOL showNewlyAdded;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)_dotImage;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
