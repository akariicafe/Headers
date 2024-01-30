@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *applicationBundleIdentifierOverride;
@property (retain, nonatomic) NSString *secondarySourceAppplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) BOOL allowsExpensiveAccess;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
