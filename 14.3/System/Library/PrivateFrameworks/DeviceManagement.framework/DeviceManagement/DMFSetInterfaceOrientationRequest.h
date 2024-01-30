@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest

@property (nonatomic) BOOL lockOrientation;
@property (nonatomic) unsigned long long interfaceOrientation;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
