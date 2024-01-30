@class NSString, NSNumber, NSArray;

@interface PSYActivityInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *backboardPrelaunchBundleIdentifier;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *machServiceName;
@property (copy, nonatomic) NSString *priority;
@property (copy, nonatomic) NSNumber *timeoutSeconds;
@property (copy, nonatomic) NSArray *sessionTypes;

+ (id)activityWithPlist:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
