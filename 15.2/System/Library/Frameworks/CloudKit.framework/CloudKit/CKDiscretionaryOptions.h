@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *applicationBundleIdentifierOverride;
@property (retain, nonatomic) NSString *secondarySourceApplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
