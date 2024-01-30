@class NSURL;

@interface QLImageItemURLContents : QLImageItemContents <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *imageURL;

+ (id)imageItemContentsWithImage:(id)a0 imageURL:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
