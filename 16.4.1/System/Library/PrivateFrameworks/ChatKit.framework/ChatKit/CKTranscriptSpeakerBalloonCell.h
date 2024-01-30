@class CKSpeakerButton;

@interface CKTranscriptSpeakerBalloonCell : CKTranscriptBalloonCell

@property (retain, nonatomic) CKSpeakerButton *speakerButton;
@property (nonatomic) BOOL shouldShowText;
@property (nonatomic, getter=isSpeakerEnabled) BOOL speakerEnabled;
@property (nonatomic, getter=isSpeakerHidden) BOOL speakerHidden;
@property (nonatomic) BOOL adjustSpeakerForAcknowledgment;

- (void)setOrientation:(char)a0;
- (void).cxx_destruct;
- (void)layoutSubviewsForAlignmentContents;

@end
