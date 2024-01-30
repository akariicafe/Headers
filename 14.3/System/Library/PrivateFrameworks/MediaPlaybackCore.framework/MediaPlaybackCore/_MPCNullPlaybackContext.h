@class NSString;

@interface _MPCNullPlaybackContext : MPPlaybackContext

@property (copy, nonatomic) NSString *label;

+ (Class)queueFeederClass;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionComponents;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
