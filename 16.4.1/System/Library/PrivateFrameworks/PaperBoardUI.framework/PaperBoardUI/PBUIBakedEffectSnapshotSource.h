@class NSString, PBUIWallpaperEffectConfiguration, UIImage, _UILegibilitySettings;

@interface PBUIBakedEffectSnapshotSource : NSObject <PBUIReplicaSnapshotSource, NSCopying, BSDescriptionProviding>

@property (copy, nonatomic) NSString *cacheIdentifier;
@property (copy, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (retain, nonatomic) UIImage *snapshot;
@property (retain, nonatomic) PBUIWallpaperEffectConfiguration *effectConfiguration;
@property (readonly, nonatomic) BOOL effectsAreBakedIn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)initWithSnapshotSource:(id)a0;

@end
