@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id /* block */)entityGenerator;
- (Class)viewControllerClass;
- (BOOL)isAppClipPlaceholderEntity;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (id)appClipPlaceholderEntity;
- (unsigned long long)hash;
- (BOOL)supportsPresentationAtAnySize;
- (id)initWithBundleIdentifier:(id)a0 futureSceneIdentifier:(id)a1;
- (BOOL)wantsExclusiveForeground;
- (BOOL)isEqual:(id)a0;

@end
