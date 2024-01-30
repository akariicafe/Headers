@class NSString;

@interface SCNActionReference : SCNActionGroup

@property (copy, nonatomic) NSString *referenceName;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isAReference;

@end
