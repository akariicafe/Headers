@class NSString;

@interface SBNewWindowRequestSwitcherEventResponse : SBSwitcherModifierEventResponse

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (long long)type;
- (id)initWithBundleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
