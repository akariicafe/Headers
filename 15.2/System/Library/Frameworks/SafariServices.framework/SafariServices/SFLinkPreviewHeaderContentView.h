@class NSString, UIImageView, NSArray, UILabel, UIButton;
@protocol SFLinkPreviewHeaderContentViewDelegate;

@interface SFLinkPreviewHeaderContentView : UIButton {
    UILabel *_domainLabel;
    UIButton *_togglePreviewButton;
    UIImageView *_safariIcon;
    NSArray *_domainWithHidePreviewActionConstraints;
    NSArray *_safariIconWithShowPreviewActionConstraints;
}

@property (weak, nonatomic) id<SFLinkPreviewHeaderContentViewDelegate> delegate;
@property (copy, nonatomic) NSString *domain;
@property (nonatomic, getter=isPreviewEnabled) BOOL previewEnabled;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)_togglePreviewButtonPressed;
- (void)_updateDomainWithHidePreviewActionConstraints;
- (void)_updateSafariIconWithShowPreviewActionConstraints;

@end
