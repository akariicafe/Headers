@class UIImageView;
@protocol BCSAction;

@interface SFQRImageHeaderView : UIView {
    UIImageView *_iconView;
}

@property (weak, nonatomic) id<BCSAction> action;

- (id)_title;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)_actionTypeString;

@end
