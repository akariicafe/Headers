@class NSURL, UILabel, NSDictionary, UIVisualEffectView, UIBlurEffect, HMHome, ANAnnounce, UIButton, UIView, UIScrollView, NSString, HUWaveformView, HUAnnouncementGlobeView, UILongPressGestureRecognizer, UIStackView, HURecordingButton, NSLayoutConstraint, HFAudioRecorder, UIImpactFeedbackGenerator;
@protocol HUAnnouncementsBrowserViewControllerDelegate;

@interface HUAnnouncementsBrowserViewController : UIViewController <HFAudioRecorderDelegate, HUAnnouncementsGlobeViewDelegate, HFAccessoryObserver, HFMediaObjectObserver>

@property (retain, nonatomic) UILabel *largeTitleLabel;
@property (retain, nonatomic) UIVisualEffectView *largeTitleVisualEffectView;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIVisualEffectView *subTitleVisualEffectView;
@property (retain, nonatomic) HUWaveformView *audioWaveformView;
@property (retain, nonatomic) UILabel *announcementDeliveryFailureLabel;
@property (retain, nonatomic) HURecordingButton *recordButton;
@property (retain, nonatomic) UILabel *recordButtonLabel;
@property (retain, nonatomic) UIVisualEffectView *recordButtonLabelVisualEffectView;
@property (retain, nonatomic) UIScrollView *transcriptionScrollView;
@property (retain, nonatomic) UIStackView *transcriptionStackView;
@property (retain, nonatomic) UILabel *transcriptionText;
@property (retain, nonatomic) UILabel *transcriptionTitleLabel;
@property (retain, nonatomic) UILabel *errorStatusLabel;
@property (retain, nonatomic) NSString *senderName;
@property (retain, nonatomic) HFAudioRecorder *audioRecorder;
@property (nonatomic) double recordedDuration;
@property (retain, nonatomic) NSURL *recordedAnnouncementURL;
@property (retain, nonatomic) UIBlurEffect *blurEffect;
@property (retain, nonatomic) NSDictionary *notificationPayload;
@property (weak, nonatomic) id<HUAnnouncementsBrowserViewControllerDelegate> delegate;
@property (retain, nonatomic) UIView *lightedCircleView;
@property (retain, nonatomic) HUAnnouncementGlobeView *announcementGlobeView;
@property (retain, nonatomic) UILabel *announcementProgressLabel;
@property (retain, nonatomic) UIButton *nextAnnouncementButton;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (retain, nonatomic) NSLayoutConstraint *audioWaveformViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *audioWaveformViewTrailingConstraint;
@property (copy, nonatomic) NSString *recipientTitle;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (nonatomic) BOOL shouldNotSendCurrentRecording;
@property (nonatomic) double notificationLaunchTimeInterval;
@property (nonatomic) double notificationDismissTimeInterval;
@property (retain, nonatomic) ANAnnounce *announce;
@property (retain, nonatomic) HMHome *currentHome;
@property (nonatomic) BOOL isTearingDown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_commonInit;
- (void).cxx_destruct;
- (void)dealloc;
- (void)accessoryDidUpdateControllable:(id)a0;
- (void)accessoryDidUpdateReachableTransports:(id)a0;
- (void)didUpdateAveragePower:(float)a0;
- (void)audioRecorderDidStartRecording:(id)a0;
- (void)audioRecorderFailedToStartRecording:(id)a0;
- (void)audioRecorderFailedToFinishRecording:(id)a0;
- (void)audioRecorderFinishedRecording:(id)a0 audioFile:(id)a1;
- (void)accessoryDidUpdateReachability:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (id)_waveformColor;
- (void)didSelectItemWithInfo:(id)a0 totalNumberOfAnnouncements:(unsigned long long)a1;
- (void)_updateUIBasedOnReachabilityStatus;
- (void)_deleteAudioFile;
- (void)_dismissViewOrDisplayError:(id)a0;
- (BOOL)_isRoomContext;
- (BOOL)_isHomeContext;
- (void)_hideRecordingUI;
- (void)_deleteRecording:(id)a0;
- (BOOL)_isNotificationPayloadValid;
- (void)_submitAnalyticsForAnnounceNotificationUsage;
- (void)_submitAnalyticsForAnnounceRecordingCompletedSuccessfully:(BOOL)a0 interruptedByUser:(BOOL)a1;
- (void)_configureSubViewsForValidNotificationPayload;
- (void)_configureVisualStyleForLightedCircleView;
- (void)_setupRecipientInformation;
- (void)_addCommonTranscriptionConstraints;
- (id)_fontForAnnouncementProgressLabel;
- (void)_applyTranscriptionText:(id)a0;
- (void)_recordButtonLongPressGesture:(id)a0;
- (void)_recordButtonTapped:(id)a0;
- (void)_skipToNextAnnouncement:(id)a0;
- (double)_transcriptionStackViewHeight;
- (void)_addTranscriptionConstraintsForValidNotificationPayload;
- (void)_beginRecordingReply:(id)a0;
- (void)_stopRecordingAndSendReply:(id)a0;
- (void)_sendAnnouncement:(id)a0;
- (id)_lightedCircleBackgroundColorForCurrentInterfaceStyle;
- (id)_lightedCircleShadowColorForCurrentInterfaceStyle;
- (void)_sendAnnouncementReply:(id)a0;
- (id)initWithNotificationPayload:(id)a0 delegate:(id)a1;
- (void)tearDownAudioActivity;
- (id)_backgroundColorForNextAnnouncementButton;

@end
