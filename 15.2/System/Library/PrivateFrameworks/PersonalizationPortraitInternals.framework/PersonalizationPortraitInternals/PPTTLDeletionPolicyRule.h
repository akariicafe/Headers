@class NSString, NSNumber;

@interface PPTTLDeletionPolicyRule : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSNumber *maxAgeSeconds;

- (id)initWithBundleIdentifier:(id)a0 groupIdentifier:(id)a1 maxAgeSeconds:(id)a2;
- (id)description;
- (void).cxx_destruct;

@end
