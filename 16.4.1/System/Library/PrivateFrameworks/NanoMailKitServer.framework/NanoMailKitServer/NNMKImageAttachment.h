@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL renderOnClient;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;

@end
