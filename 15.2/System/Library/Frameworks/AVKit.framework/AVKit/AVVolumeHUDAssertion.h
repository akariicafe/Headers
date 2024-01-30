@class NSString, UIWindowScene;
@protocol AVVolumeHUDAssertionDelegate;

@interface AVVolumeHUDAssertion : NSObject <MPVolumeDisplaying>

@property (weak, nonatomic) id<AVVolumeHUDAssertionDelegate> delegate;
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

@end
