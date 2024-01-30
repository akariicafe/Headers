@class NSString, UIWindowScene;

@interface _TtC11MediaCoreUIP33_C6C2762BD64E1F1C383A97C988662FA114VolumeObserver : NSObject <MPVolumeControllerDelegate, MPVolumeDisplaying> {
    void /* unknown type, empty encoding */ volumeController;
    void /* unknown type, empty encoding */ isDragging;
    void /* unknown type, empty encoding */ _sliderValue;
    void /* unknown type, empty encoding */ _isEnabled;
    void /* unknown type, empty encoding */ commitVolumeChange;
}

@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic) void /* unknown type, empty encoding */ onScreenForVolumeDisplay;

- (void)volumeController:(id)a0 volumeValueDidChange:(float)a1;
- (void)volumeController:(id)a0 volumeControlAvailableDidChange:(BOOL)a1;
- (BOOL)isOnScreenForVolumeDisplay;
- (id)init;
- (void).cxx_destruct;

@end
