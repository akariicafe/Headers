@class RUIObjectModel, RUIFooterElement, RUIHeaderElement, UIView, UILabel, RUIHeaderView, RemoteUISectionFooter, UIActivityIndicatorView, UIColor;

@interface RUISpinnerView : RUIElement {
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    RUIHeaderView *_headerView;
    RemoteUISectionFooter *_footerView;
}

@property (weak, nonatomic) RUIObjectModel *objectModel;
@property (retain, nonatomic) UIColor *spinnerColor;
@property (retain, nonatomic) RUIHeaderElement *header;
@property (retain, nonatomic) RUIFooterElement *footer;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)spinnerView;
- (void)viewDidLayout;

@end
