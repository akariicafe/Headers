@class CKBalloonView, CKVibrantBalloonContainerView, NUIContainerBoxView, CKAudioController, NSString;

@interface SearchUIMessageCardSectionView : SearchUICardSectionView <CKBalloonViewDelegate, CKAudioControllerDelegate>

@property (retain, nonatomic) NUIContainerBoxView *contentView;
@property (retain, nonatomic) CKBalloonView *balloonView;
@property (retain, nonatomic) CKVibrantBalloonContainerView *vibrantBalloon;
@property (retain, nonatomic) CKAudioController *audioController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsRecyclingForCardSection:(id)a0;

- (void)_dynamicUserInterfaceTraitDidChange;
- (void)tlk_updateForAppearance:(id)a0;
- (void)didMoveToWindow;
- (void)updateWithRowModel:(id)a0;
- (void).cxx_destruct;
- (void)audioBalloonScrubberDidChangeValue:(double)a0;
- (void)audioController:(id)a0 mediaObjectDidFinishPlaying:(id)a1;
- (void)audioController:(id)a0 mediaObjectProgressDidChange:(id)a1 currentTime:(double)a2 duration:(double)a3;
- (void)balloonView:(id)a0 userDidDragOutsideBalloonWithPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)balloonViewDoubleTapped:(id)a0;
- (void)balloonViewLongTouched:(id)a0;
- (void)balloonViewSelected:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)balloonViewShouldCopyToPasteboard:(id)a0;
- (void)balloonViewShowInlineReply:(id)a0;
- (void)balloonViewTapped:(id)a0 withModifierFlags:(long long)a1 selectedText:(id)a2;
- (void)balloonViewTextViewDidChangeSelection:(id)a0 selectedText:(id)a1 textView:(id)a2;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)a0;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)a0;
- (void)liveBalloonTouched:(id)a0;
- (id)setupContentView;
- (id)textBalloonView;
- (void)balloonViewRequestsDeselection:(id)a0;
- (id)audioBalloonViewWithFileURL:(id)a0;
- (void)balloonViewSelected:(id)a0 toggleSelection:(BOOL)a1;

@end
