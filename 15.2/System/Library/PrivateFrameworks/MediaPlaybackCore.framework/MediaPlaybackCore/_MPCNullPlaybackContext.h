@class NSString;

@interface _MPCNullPlaybackContext : MPPlaybackContext

@property (copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;
+ (Class)queueFeederClass;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)descriptionComponents;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
