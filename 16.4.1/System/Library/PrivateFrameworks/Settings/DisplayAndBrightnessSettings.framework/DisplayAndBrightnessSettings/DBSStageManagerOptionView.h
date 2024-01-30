@class UIStackView, NSString, UILabel, DBSCheckmarkView;
@protocol DBSStageManagerOptionViewDelegate;

@interface DBSStageManagerOptionView : UIView <UIGestureRecognizerDelegate>

@property (retain, nonatomic) UIStackView *_stackView;
@property (retain, nonatomic) UILabel *_label;
@property (retain, nonatomic) DBSCheckmarkView *_checkmarkView;
@property (nonatomic, getter=highlighted) BOOL highlight;
@property (weak, nonatomic) id<DBSStageManagerOptionViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long stageManagerOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void).cxx_destruct;
- (void)_configureView;
- (void)_updateViewForCurrentOptionState;
- (void)_userDidTapOnView:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 stageManagerOption:(unsigned long long)a1;
- (void)updateOptionState;

@end
