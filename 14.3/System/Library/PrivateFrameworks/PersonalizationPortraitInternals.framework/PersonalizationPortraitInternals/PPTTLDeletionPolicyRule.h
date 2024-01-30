@class NSString, NSNumber;

@interface PPTTLDeletionPolicyRule : NSObject

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSNumber *maxAgeSeconds;

- (void).cxx_destruct;
- (id)description;
- (id)initWithBundleIdentifier:(id)a0 groupIdentifier:(id)a1 maxAgeSeconds:(id)a2;

@end
