@class NSString;

@interface WLSafeHarborMigrationSpecifier : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *dataType;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBundleID:(id)a0 contentType:(id)a1 dataType:(id)a2;

@end
