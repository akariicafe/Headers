@class SBTraitsSceneParticipantDelegate, NSString, FBSDisplayConfiguration, SBFTraitsParticipant, FBScene, NSHashTable;

@interface SBSceneSettingsUpdater : NSObject {
    NSString *_traitsRole;
    SBFTraitsParticipant *_traitsParticipant;
    NSHashTable *_observers;
}

@property (readonly, weak, nonatomic) FBScene *scene;
@property (readonly, copy, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly, nonatomic) SBTraitsSceneParticipantDelegate *sceneTraitsDelegate;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) BOOL updatesGeometry;
@property (retain, nonatomic) FBSDisplayConfiguration *displayConfiguration;
@property (retain, nonatomic) NSString *traitsRole;
@property (nonatomic, getter=isForeground) BOOL foreground;
@property (nonatomic) double level;

+ (void)safeUpdateScene:(id)a0 withSceneLevel:(double)a1;
+ (void)__updateSceneInsetSettings:(id)a0 forDisplayConfiguration:(id)a1;
+ (void)__updateSceneSettings:(id)a0 forDisplayConfiguration:(id)a1 updateGeometry:(BOOL)a2;
+ (void)safeUpdateScene:(id)a0 withBlock:(id /* block */)a1;
+ (void)safeUpdateScene:(id)a0 withDisplayConfiguration:(id)a1;
+ (void)safeUpdateScene:(id)a0 withDisplayConfiguration:(id)a1 updateGeometry:(BOOL)a2;
+ (void)safeUpdateScene:(id)a0 withUserInterfaceStyle:(long long)a1;

- (void)_createTraitsParticipantIfNeededWithRole:(id)a0;
- (id)addObserver:(id)a0;
- (void)_setPersistenceIdentifier:(id)a0;
- (void)dealloc;
- (void)__setupTraitsParticipantWithRole:(id)a0 displayIdentity:(id)a1;
- (void)setActive:(BOOL)a0 withTransitionContext:(id)a1;
- (id)initWithScene:(id)a0 displayConfiguration:(id)a1 traitsRole:(id)a2 persistentIdentifier:(id)a3 level:(double)a4 updatesGeometry:(BOOL)a5;
- (void).cxx_destruct;

@end
