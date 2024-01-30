@class NSString;

@interface CKDiscretionaryOptions : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *applicationBundleIdentifierOverride;
@property (retain, nonatomic) NSString *secondarySourceApplicationBundleId;
@property (nonatomic) double timeoutIntervalForResource;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsExpensiveNetworkAccess;
@property (nonatomic) unsigned long long discretionaryNetworkBehavior;
@property (nonatomic) BOOL requiresNetworkAccess;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
