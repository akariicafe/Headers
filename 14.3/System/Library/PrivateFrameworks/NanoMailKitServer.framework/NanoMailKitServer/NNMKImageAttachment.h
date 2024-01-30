@interface NNMKImageAttachment : NNMKAttachment <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL renderOnClient;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
