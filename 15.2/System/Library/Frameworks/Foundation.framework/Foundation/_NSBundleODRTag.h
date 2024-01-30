@interface _NSBundleODRTag : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double preservationPriority;
@property BOOL alwaysPreserved;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
