@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay

@property (readonly, nonatomic) long long appearance;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;

+ (BOOL)shouldShowEditingIntroduction;

- (id)animatedTutorialViewNamed:(id)a0 ofType:(id)a1 needsFrame:(BOOL)a2;
- (id)textBodyFont;
- (id)buttonTitle;
- (id)mediaContents;
- (id)textTitleDescriptions;
- (void)extraButtonTapAction;
- (id)textBodyDescriptions;
- (void).cxx_destruct;
- (void)updateConstraints;
- (double)pagingInterval;
- (BOOL)presentsFullScreen;

@end
