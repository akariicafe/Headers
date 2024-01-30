@class NSString, NSNumber, NSURL;

@interface DMFAppRequest : DMFTaskRequest

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *storeItemIdentifier;
@property (copy, nonatomic) NSURL *manifestURL;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
