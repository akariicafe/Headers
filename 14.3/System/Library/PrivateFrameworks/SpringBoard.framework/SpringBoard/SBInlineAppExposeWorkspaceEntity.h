@class NSString;

@interface SBInlineAppExposeWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;

- (void).cxx_destruct;
- (id)inlineAppExposeWorkspaceEntity;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)entityGenerator;
- (Class)viewControllerClass;
- (BOOL)isInlineAppExposeWorkspaceEntity;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (unsigned long long)hash;
- (BOOL)supportsPresentationAtAnySize;
- (BOOL)wantsExclusiveForeground;
- (id)initWithBundleIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
