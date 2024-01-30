@class NSString;

@interface SBNewWindowRequestSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;
- (long long)type;

@end
