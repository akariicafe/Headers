@interface CACodingProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id)initWithObject:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)decodedObject;
- (void)encodeWithCoder:(id)a0;

@end
