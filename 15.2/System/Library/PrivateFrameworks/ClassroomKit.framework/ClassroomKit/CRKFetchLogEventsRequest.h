@class NSString, NSDate;

@interface CRKFetchLogEventsRequest : CATTaskRequest

@property (copy, nonatomic) NSDate *cursorDate;
@property (copy, nonatomic) NSString *sessionToken;

+ (BOOL)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
