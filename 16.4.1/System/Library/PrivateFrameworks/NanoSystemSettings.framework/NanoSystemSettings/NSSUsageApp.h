@class NSString;

@interface NSSUsageApp : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSString *bundleVersion;
@property (nonatomic) unsigned long long staticSize;
@property (nonatomic) unsigned long long dynamicSize;
@property (nonatomic) unsigned long long dataSize;
@property (nonatomic) unsigned long long totalSize;
@property (readonly, nonatomic) unsigned long long sharedSize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
