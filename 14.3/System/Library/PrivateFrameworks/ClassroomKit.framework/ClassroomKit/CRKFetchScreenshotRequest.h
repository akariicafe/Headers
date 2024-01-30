@interface CRKFetchScreenshotRequest : CATTaskRequest

@property (nonatomic) unsigned long long maxWidth;
@property (nonatomic) unsigned long long maxHeight;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
