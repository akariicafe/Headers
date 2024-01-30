@class QSSelectionHighlightView, NSArray, NSString, AXOrator, AXDispatchTimer, UITextRange, AXLanguageTaggedContent;

@interface AXQuickSpeak : NSObject <AXOratorDelegate> {
    struct CGPoint { double x; double y; } _lastQuickSpeakOffset;
    AXOrator *_orator;
    unsigned long long _lastWholeCharacterLocation;
    unsigned long long _lastUnicharLocation;
    UITextRange *_currentSentenceRange;
}

@property (readonly, nonatomic) AXOrator *orator;
@property (nonatomic) BOOL cachedIdleTimerPref;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) id quickSpeakInitiator;
@property (retain, nonatomic) AXDispatchTimer *highlightViewDispatcher;
@property (retain, nonatomic) NSArray *hiddenTextSelectionViews;
@property (retain, nonatomic) NSArray *hiddenTextSelectionViewDelegates;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) id contentOwner;
@property (retain, nonatomic) UITextRange *speakingSentenceRange;
@property (nonatomic) BOOL spellOutContent;
@property (readonly, nonatomic) AXLanguageTaggedContent *selectedContent;
@property (nonatomic) BOOL hasTextBalloonView;
@property (retain, nonatomic) QSSelectionHighlightView *highlightView;
@property (retain, nonatomic) QSSelectionHighlightView *sentenceHighlightView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)initialize;
+ (BOOL)quickSpeakClassIsBlacklisted:(id)a0;
+ (BOOL)isQuickSpeakSelector:(SEL)a0;

- (id)init;
- (void).cxx_destruct;
- (void)oratorDidResumeSpeaking:(id)a0;
- (BOOL)spellOutContent;
- (void)oratorDidFinishSpeaking:(id)a0;
- (void)oratorDidPauseSpeaking:(id)a0;
- (void)oratorDidCancelSpeaking:(id)a0;
- (void)orator:(id)a0 willSpeakRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 ofContent:(id)a2;
- (void)speakStatusWithLanguage:(id)a0 rate:(id)a1;
- (void)setSpellOutContent:(BOOL)a0;
- (void)dealloc;
- (BOOL)isSpeaking;
- (void)_installWebKitLegacySafeCategoriesIfNeeded;
- (void)_handleAppDidEnterBackground:(id)a0;
- (void)_handleAppWillResignActive:(id)a0;
- (void)_stopSpeakingQuickSpeak:(id)a0;
- (void)_installWebKitLegacySafeCategories;
- (void)_handleWebkitLegacyWasLoaded:(id)a0;
- (void)stopAction:(id)a0;
- (void)resumeAction:(id)a0;
- (void)_manipulateOtherTextViews:(BOOL)a0;
- (id)_textSelectionViews;
- (id)_viewsWithBlock:(id /* block */)a0;
- (id)_quickSpeakInputInitiator;
- (void)_updateCalloutBar;
- (void)_cleanupTextSelectionViews;
- (void)_quickSpeakTextRects:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 highlightRects:(id)a3 sentenceRects:(id)a4 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (void)_quickSpeakUITextInputTextRects:(id)a0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 string:(id)a2 highlightRects:(id)a3 sentenceRects:(id)a4 singleTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a5;
- (void)_handleQuickSpeakHighlight:(id)a0 sentenceRects:(id)a1 textRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 initiator:(id)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_updatedRangeForComposedCharacters:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 lastKnownWholeCharacterLocation:(unsigned long long)a2 lastKnownUnicharLocation:(unsigned long long)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })modifiedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 withString:(id)a1;
- (id)_rectsByUnionSamelineRects:(id)a0;
- (id)_sentenceRects:(id)a0 speakingRange:(id)a1;
- (void)_scrollToTextRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 withScrollView:(id)a1;
- (id)_sentenceHighlightOverlapHeightArray;
- (id)_sliceRects:(id)a0 withSentenceRects:(id)a1 wordRects:(id)a2;
- (void)_handlePauseCallback;
- (void)_willSpeakRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1;
- (void)resetQuickSpeakForUnitTests;
- (void)speakAction:(id)a0 withPreferredLanguage:(id)a1;
- (void)pauseAction:(id)a0;
- (BOOL)selectedContentIsSpeakable;
- (BOOL)selectedContentRequiresUserChoice;

@end
