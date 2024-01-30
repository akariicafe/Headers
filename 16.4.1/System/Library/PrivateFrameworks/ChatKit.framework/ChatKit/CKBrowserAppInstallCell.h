@class CKAppInstallation, CKBrowserIconView;

@interface CKBrowserAppInstallCell : CKBrowserCell

@property (retain, nonatomic) CKBrowserIconView *browserIconView;
@property (retain, nonatomic) CKAppInstallation *installation;

+ (id)reuseIdentifier;

- (id)iconView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
