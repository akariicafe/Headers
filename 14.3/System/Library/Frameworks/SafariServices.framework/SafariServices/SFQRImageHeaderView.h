@class UIImageView;
@protocol BCSAction;

@interface SFQRImageHeaderView : UIView {
    UIImageView *_iconView;
}

@property (weak, nonatomic) id<BCSAction> action;

- (id)_actionTypeString;
- (void).cxx_destruct;
- (id)_title;
- (void)traitCollectionDidChange:(id)a0;

@end
