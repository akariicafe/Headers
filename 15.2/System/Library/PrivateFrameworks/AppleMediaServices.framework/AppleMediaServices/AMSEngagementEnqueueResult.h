@class NSDictionary, NSArray, AMSEngagementRequest;

@interface AMSEngagementEnqueueResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *data;
@property (retain, nonatomic) NSArray *actions;
@property (retain, nonatomic) AMSEngagementRequest *request;

+ (id)archiveClasses;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
