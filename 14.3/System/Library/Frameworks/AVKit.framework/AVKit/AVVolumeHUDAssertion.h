@class NSString, UIWindowScene;

@interface AVVolumeHUDAssertion : NSObject <MPVolumeDisplaying>

@property (readonly, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden;
@property (readonly, nonatomic) UIWindowScene *windowSceneForVolumeDisplay;
@property (readonly, nonatomic, getter=isOnScreenForVolumeDisplay) BOOL onScreenForVolumeDisplay;
@property (readonly, nonatomic) NSString *volumeAudioCategory;
@property (readonly, nonatomic, getter=isOnScreen) BOOL onScreen;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSceneIdentifier:(id)a0 clientIdentifier:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
