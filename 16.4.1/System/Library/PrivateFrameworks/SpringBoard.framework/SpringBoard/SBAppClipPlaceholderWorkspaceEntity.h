@class NSString;

@interface SBAppClipPlaceholderWorkspaceEntity : SBWorkspaceEntity

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *futureSceneIdentifier;
@property (readonly, nonatomic) BOOL needsUpdate;

+ (BOOL)isAppClipUpdateAvailableForBundleIdentifier:(id)a0;

- (BOOL)supportsPresentationAtAnySize;
- (BOOL)_supportsLayoutRole:(long long)a0;
- (Class)viewControllerClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)appClipPlaceholderEntity;
- (BOOL)isAppClipPlaceholderEntity;
- (id /* block */)entityGenerator;
- (BOOL)wantsExclusiveForeground;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0 futureSceneIdentifier:(id)a1 needsUpdate:(BOOL)a2;

@end
