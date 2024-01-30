@class NSString;

@interface SBAppSwitcherService : NSObject

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *viewServiceClassName;

+ (id)switcherServiceWithName:(id)a0 viewServiceClassName:(id)a1;

- (void).cxx_destruct;

@end
