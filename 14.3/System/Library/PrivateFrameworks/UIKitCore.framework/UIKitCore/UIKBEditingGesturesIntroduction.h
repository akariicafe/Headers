@class NSLayoutConstraint;

@interface UIKBEditingGesturesIntroduction : UIKBTutorialModalDisplay

@property (readonly, nonatomic) long long appearance;
@property (retain, nonatomic) NSLayoutConstraint *topPaddingConstraint;

+ (BOOL)shouldShowEditingIntroduction;

- (id)buttonTitle;
- (void).cxx_destruct;
- (id)animatedTutorialViewNamed:(id)a0 ofType:(id)a1 needsFrame:(BOOL)a2;
- (void)updateConstraints;
- (id)textBodyFont;
- (id)mediaContents;
- (void)extraButtonTapAction;
- (id)textBodyDescriptions;
- (id)textTitleDescriptions;
- (double)pagingInterval;
- (BOOL)presentsFullScreen;

@end
