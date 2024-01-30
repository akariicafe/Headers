@class NSString, UITraitCollection;

@interface INUIPortableImageLoaderHelper : NSObject <INPortableImageLoaderHelping>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)loadImageDataFromBundle:(id)a0 withImageName:(id)a1 accessSpecifier:(id)a2 completion:(id /* block */)a3;
- (void)loadImageSizeFromData:(id)a0 completion:(id /* block */)a1;

@end
