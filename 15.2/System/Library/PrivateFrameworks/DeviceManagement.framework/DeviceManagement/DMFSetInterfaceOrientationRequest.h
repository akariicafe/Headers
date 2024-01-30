@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest

@property (nonatomic) BOOL lockOrientation;
@property (nonatomic) unsigned long long interfaceOrientation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
