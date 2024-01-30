@class NSArray, NSString, AMSProcessInfo;

@interface AMSEngagementEnqueueRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) AMSProcessInfo *clientInfo;
@property (retain, nonatomic) NSArray *destinations;
@property (retain, nonatomic) NSArray *events;
@property (retain, nonatomic) NSString *logKey;
@property (nonatomic) double timeout;

+ (id)archiveClasses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
