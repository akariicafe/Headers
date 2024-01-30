@class NSString, UIImage;

@interface _UIActivityBundleImageConfiguration : NSObject <NSSecureCoding> {
    UIImage *_fetchedImage;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *bundlePath;
@property (nonatomic) long long activityCategory;
@property (readonly, nonatomic) UIImage *fetchedImage;

- (void).cxx_destruct;
- (id)initWithImageName:(id)a0 bundlePath:(id)a1 activityCategory:(long long)a2;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
