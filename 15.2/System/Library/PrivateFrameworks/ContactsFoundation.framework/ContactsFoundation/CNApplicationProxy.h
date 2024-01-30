@class NSString, NSArray;

@interface CNApplicationProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *teamIdentifier;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSArray *activityTypes;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithLSApplicationProxy:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 teamIdentifier:(id)a1 localizedName:(id)a2 activityTypes:(id)a3;

@end
