@class NSString;

@interface SBLockScreenElementOverride : NSObject

@property (nonatomic) long long element;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (copy, nonatomic) NSString *text;

+ (id)overrideForElement:(long long)a0;
+ (id)overrideForHiddenElement:(long long)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;

@end
