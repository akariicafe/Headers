@interface CACodingProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithObject:(id)a0;
- (id)decodedObject;
- (id)initWithCoder:(id)a0;

@end
