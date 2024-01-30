@class NSString, CKAudioController, NSObject;
@protocol CKNotificationAudioViewControllerDelegate;

@interface CKNotificationAudioViewController : UIViewController <CKAudioControllerDelegate> {
    CKAudioController *_audioController;
}

@property (weak, nonatomic) NSObject<CKNotificationAudioViewControllerDelegate> *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonTapped:(id)a0;
- (void).cxx_destruct;
- (void)_audioMessageToggled;
- (void)loadMessage:(id)a0;
- (void)playOrPauseAudioMessage;

@end
