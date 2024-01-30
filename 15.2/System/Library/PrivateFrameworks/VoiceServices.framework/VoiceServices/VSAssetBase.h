@class NSString, NSNumber;

@interface VSAssetBase : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSNumber *compatibilityVersion;
@property (copy, nonatomic) NSNumber *contentVersion;
@property (copy, nonatomic) NSString *masteredVersion;
@property (copy, nonatomic) NSNumber *downloadSize;
@property (nonatomic) BOOL isPurgeable;
@property (nonatomic) long long storage;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
