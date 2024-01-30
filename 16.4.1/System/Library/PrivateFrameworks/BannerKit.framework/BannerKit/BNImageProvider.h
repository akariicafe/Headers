@class UIImage, NSString, NSURL;

@interface BNImageProvider : NSObject <BNImageProviding> {
    id _imageSource;
    long long _imageSourceType;
    NSURL *_bundleURL;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isImageProvider) BOOL imageProvider;
@property (readonly, copy, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithImageName:(id)a0;
- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithSystemImageName:(id)a0;
- (id)_initWithImageSource:(id)a0 ofType:(long long)a1 fromBundle:(id)a2;
- (id)initWithImageName:(id)a0 fromBundle:(id)a1;

@end
