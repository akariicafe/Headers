@class NSString;

@interface SBSwitcherShelf : NSObject <BSDescriptionProviding, NSCopying, SBSwitcherLayoutElementProviding>

@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) long long layoutRole;
@property (readonly, nonatomic) unsigned long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (unsigned long long)switcherLayoutElementType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescriptionBuilder;
- (id)initWithBundleIdentifier:(id)a0 layoutRole:(long long)a1 displayMode:(unsigned long long)a2;

@end
