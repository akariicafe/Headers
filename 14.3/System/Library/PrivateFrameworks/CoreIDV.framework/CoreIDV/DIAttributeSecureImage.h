@class NSData;

@interface DIAttributeSecureImage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *imageData;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSData *flags;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImageData:(id)a0 signature:(id)a1 flags:(id)a2;

@end
