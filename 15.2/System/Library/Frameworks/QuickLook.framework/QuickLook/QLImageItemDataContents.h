@class NSData;

@interface QLImageItemDataContents : QLImageItemContents <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSData *imageData;

+ (id)imageItemContentsWithImage:(id)a0 imageData:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
