@interface ASCredentialRequestIconGenerator : NSObject

+ (id)iconForPresentationContext:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_iconForData:(id)a0 scale:(double)a1 size:(struct CGSize { double x0; double x1; })a2;
+ (id)_iconForApplicationIdentifier:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_providerIconForPasswordLoginChoice:(id)a0;
+ (id)_imageForIcon:(id)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (id)_keychainIcon;
+ (id)_iconForPasswordProviderBundleIdentifier:(id)a0;
+ (id)iconForPasswordLoginChoice:(id)a0 presentationContext:(id)a1;

@end
