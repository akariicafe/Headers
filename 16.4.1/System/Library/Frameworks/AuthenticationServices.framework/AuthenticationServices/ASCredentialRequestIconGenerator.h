@class UIImage;

@interface ASCredentialRequestIconGenerator : NSObject

@property (class, readonly, nonatomic) UIImage *passwordManagerIcon;
@property (class, readonly, nonatomic) UIImage *systemPasskeyIcon;
@property (class, readonly, nonatomic) UIImage *systemPasswordIcon;
@property (class, readonly, nonatomic) UIImage *systemSecurityKeysIcon;
@property (class, readonly, nonatomic) UIImage *alternativeSecurityKeysIcon;

+ (id)_systemImageNamed:(id)a0;
+ (id)_iconForApplicationIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_iconForData:(id)a0 scale:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)_iconForPasswordProviderBundleIdentifier:(id)a0;
+ (id)_iconForPresentationContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_imageForIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_keychainIcon;
+ (id)_providerIconForPasswordLoginChoice:(id)a0;
+ (id)headerIconForPresentationContext:(id)a0;
+ (id)iconForPasswordLoginChoice:(id)a0 presentationContext:(id)a1;
+ (id)iconForPublicKeyCredentialLoginChoiceWithPresentationContext:(id)a0;

@end
