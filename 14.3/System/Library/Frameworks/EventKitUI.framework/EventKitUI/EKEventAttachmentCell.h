@class UIActivityIndicatorView;

@interface EKEventAttachmentCell : UITableViewCell {
    UIActivityIndicatorView *_activityIndicator;
}

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setAttachment:(id)a0;
- (id)_iconForDocumentProxy:(id)a0;
- (void)showSpinner:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
