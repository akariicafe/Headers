@class NSString;

@interface SBSStatusBarStyleOverridesAssertionData : NSObject <NSSecureCoding, BSDescriptionProviding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int statusBarStyleOverrides;
@property (nonatomic) int pid;
@property (nonatomic, getter=isExclusive) BOOL exclusive;
@property (nonatomic) BOOL showsWhenForeground;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (copy, nonatomic) NSString *statusString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithStatusBarStyleOverrides:(int)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3;
- (id)initWithStatusBarStyleOverrides:(int)a0 forPID:(int)a1 exclusive:(BOOL)a2 showsWhenForeground:(BOOL)a3 uniqueIdentifier:(id)a4;
- (void)encodeWithCoder:(id)a0;

@end
