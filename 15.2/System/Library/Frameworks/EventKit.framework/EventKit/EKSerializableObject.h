@interface EKSerializableObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)classesForKey;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
