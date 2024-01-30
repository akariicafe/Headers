@class NSString, LNAction;

@interface WFLinkContextualAction : WFContextualAction

@property (readonly, nonatomic) LNAction *linkAction;
@property (readonly, nonatomic) NSString *bundleIdentifier;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0 bundleIdentifier:(id)a1;
- (BOOL)showsUserInterfaceWhenRunning;

@end
