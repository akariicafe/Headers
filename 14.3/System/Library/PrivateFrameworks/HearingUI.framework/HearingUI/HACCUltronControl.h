@class UILabel, NSString, UIView;
@protocol HACCContentModuleDelegate;

@interface HACCUltronControl : UIControl <HACCContentModule> {
    BOOL _isListening;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (weak, nonatomic) id<HACCContentModuleDelegate> delegate;
@property (nonatomic) unsigned long long module;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)enabled;
- (BOOL)isRunning;
- (void).cxx_destruct;
- (void)updateValue;
- (void)buttonTapped:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)contentValue;

@end
