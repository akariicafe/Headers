@class UILabel;

@interface ConversationKit.InCallControlsStatusCell : UICollectionViewListCell {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ menuHostViewController;
    void /* unknown type, empty encoding */ faceTimeSymbolImage;
    void /* unknown type, empty encoding */ sharePlaySymbolImage;
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconImageView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationStatusHStack;
    void /* unknown type, empty encoding */ $__lazy_storage_$_conversationStatusDetailsVStack;
}

@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ actionButton;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
