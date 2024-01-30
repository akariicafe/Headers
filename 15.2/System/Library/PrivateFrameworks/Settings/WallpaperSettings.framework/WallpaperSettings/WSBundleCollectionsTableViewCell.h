@class NSString, NSMutableArray, UIStackView;
@protocol WSBundleCollectionsTableViewCellDelegate;

@interface WSBundleCollectionsTableViewCell : UITableViewCell <WSBundleCollectionOptionViewDelegate>

@property (retain, nonatomic) UIStackView *_stackView;
@property (retain, nonatomic) NSMutableArray *_optionViews;
@property (weak, nonatomic) id<WSBundleCollectionsTableViewCellDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } canonicalButtonSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)_configureView;
- (void)addViewForBundleCollection:(id)a0;
- (void)userDidTapBundleCollectionOptionView:(id)a0;

@end
