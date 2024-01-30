@class NSString, GKButtonStyle, GKTextStyle;

@interface GKButton : GKFocusableButton <GKTextStyleReplay> {
    GKTextStyle *_baseStyle;
    GKButtonStyle *_appliedButtonStyle;
}

@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GKTextStyle *appliedStyle;

+ (void)initialize;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setAttributedTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)applyTextStyle:(id)a0;
- (void)applyButtonStyle:(id)a0;
- (void)replayAndApplyStyleWithSystemContentChange:(BOOL)a0;

@end
