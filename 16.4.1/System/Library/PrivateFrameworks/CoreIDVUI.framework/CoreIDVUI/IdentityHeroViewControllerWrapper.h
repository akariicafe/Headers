@class NSData, NSString;

@interface IdentityHeroViewControllerWrapper : NSObject {
    NSData *_imageData;
    NSString *_title;
    NSString *_subTitle;
    NSString *_primaryButtonTitle;
    NSString *_secondaryButtonTitle;
}

- (void).cxx_destruct;
- (id)identityHeroViewController:(id /* block */)a0 secondaryButtonClicked:(id /* block */)a1;
- (id)initWithImageData:(id)a0 title:(id)a1 subtitle:(id)a2 primaryButtonTitle:(id)a3 secondaryButtonTitle:(id)a4;

@end
