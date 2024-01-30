@class VTUIPagedLabel, SiriUIContentButton, VTUICheckMarkView, SUICOrbView, UILabel, UIButton;
@protocol VTUIEnrollTrainingViewDelegate;

@interface VTUIEnrollTrainingView : UIView

@property (retain, nonatomic) UIButton *skipButton;
@property (retain, nonatomic) VTUICheckMarkView *checkMark;
@property (retain, nonatomic) VTUIPagedLabel *instructionPagedLabel;
@property (retain, nonatomic) SiriUIContentButton *radarButton;
@property (nonatomic) BOOL skipButtonHidden;
@property (nonatomic) BOOL checkMarkViewHidden;
@property (nonatomic) BOOL radarButtonHidden;
@property (readonly, nonatomic) SUICOrbView *orbView;
@property (readonly, nonatomic) UILabel *statusLabel;
@property (readonly, nonatomic) UIButton *radarExitButton;
@property (weak, nonatomic) id<VTUIEnrollTrainingViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_setupUI;
- (void)clearInstructionLabel;
- (void)startCheckMarkAnimation:(BOOL)a0 completion:(id /* block */)a1;
- (void)slideInText:(id)a0 afterDelay:(double)a1 completion:(id /* block */)a2;
- (void)showRadarExitButton:(id)a0;

@end
