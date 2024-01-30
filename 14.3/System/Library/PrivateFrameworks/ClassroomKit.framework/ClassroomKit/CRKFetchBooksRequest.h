@interface CRKFetchBooksRequest : CATTaskRequest

@property (nonatomic) BOOL includeImages;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (BOOL)isValidWithError:(id *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
