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
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (unsigned long long)switcherLayoutElementType;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 layoutRole:(long long)a1 displayMode:(unsigned long long)a2;

@end
