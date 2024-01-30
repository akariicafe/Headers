@class UIImageView;
@protocol BCSAction;

@interface SFQRImageHeaderView : UIView {
    UIImageView *_iconView;
}

@property (weak, nonatomic) id<BCSAction> action;

- (id)_title;
- (id)_actionTypeString;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;

@end
