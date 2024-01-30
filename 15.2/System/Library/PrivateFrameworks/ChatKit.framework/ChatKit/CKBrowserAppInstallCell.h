@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell

@property (retain, nonatomic) CKBrowserIconView *browserIconView;
@property (retain, nonatomic) CKAppInstallation *installation;

+ (id)reuseIdentifier;

- (void)layoutSubviews;
- (id)iconView;
- (void).cxx_destruct;

@end
