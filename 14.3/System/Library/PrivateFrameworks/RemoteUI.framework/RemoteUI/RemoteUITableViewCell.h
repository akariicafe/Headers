@class UIColor, UIImageView, RUIWebContainerView, UIView, UIButton;

@interface RemoteUITableViewCell : UITableViewCell {
    UIImageView *_invalidRowView;
    BOOL _didSetupEditableTextFieldLargeText;
    UIButton *_detailLinkButton;
    id /* block */ _detailLinkHandler;
    UIColor *_accessoryColor;
}

@property (nonatomic) BOOL forceFullSizeDetailLabel;
@property (nonatomic) BOOL leftAlignDetailLabel;
@property (nonatomic) long long remoteUIAccessoryType;
@property (retain, nonatomic) UIView *remoteUIAccessoryView;
@property (nonatomic) BOOL activityIndicatorVisible;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) RUIWebContainerView *webContainerView;

- (void).cxx_destruct;
- (id)_checkmarkImage:(BOOL)a0;
- (id)_disclosureChevronImage:(BOOL)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)editableTextField;
- (double)webViewWidth;
- (void)setDetailLinkText:(id)a0 handler:(id /* block */)a1;
- (void)_setRemoteUIAccessoryType:(long long)a0 withColor:(id)a1;
- (void)_accessoriesChanged;
- (void)_showActivityIndicatorAccessory;
- (void)_detailLinkPressed;
- (void)setHTMLData:(id)a0 sourceURL:(id)a1 delegate:(id)a2;
- (id)detailLinkButton;
- (void)setRowInvalid:(BOOL)a0;

@end
