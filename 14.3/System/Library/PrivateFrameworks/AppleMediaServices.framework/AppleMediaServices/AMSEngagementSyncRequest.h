@class NSDictionary, NSArray, NSString;

@interface AMSEngagementSyncRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSArray *destinations;
@property (retain, nonatomic) NSString *logKey;
@property (nonatomic) double timeout;

+ (id)archiveClasses;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
