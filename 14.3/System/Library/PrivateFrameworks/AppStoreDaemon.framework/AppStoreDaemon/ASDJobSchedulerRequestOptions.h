@interface ASDJobSchedulerRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL verbose;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
