@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier;
@property (readonly, nonatomic) BOOL needsUpdate;

+ (BOOL)isAppClipUpdateAvailableForBundleIdentifier:(id)a0;

- (BOOL)_supportsLayoutRole:(long long)a0;
- (Class)viewControllerClass;
- (BOOL)supportsPresentationAtAnySize;
- (id)appClipPlaceholderEntity;
- (id /* block */)entityGenerator;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 futureSceneIdentifier:(id)a1 needsUpdate:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isAppClipPlaceholderEntity;
- (BOOL)wantsExclusiveForeground;

@end
