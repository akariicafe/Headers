@class UIBarButtonItem, UIView;
@protocol SKUIModalSourceViewProviderDelegate;

@interface SKUIModalSourceViewProvider : NSObject {
    BOOL _hideOriginalSourceView;
}

@property (weak, nonatomic) id<SKUIModalSourceViewProviderDelegate> delegate;
@property (retain, nonatomic) UIView *originalSourceView;
@property (retain, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIBarButtonItem *sourceButtonBarItem;
@property (retain, nonatomic) id userInfo;

- (id)animationView;
- (void).cxx_destruct;
- (void)hideOriginalSourceView;
- (void)showOriginalSourceView;

@end
