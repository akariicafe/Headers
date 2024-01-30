@class NSArray, UIView;
@protocol NTKEditOptionContainerView;

@interface NTKEditOptionPickerView : UIView {
    NSArray *_options;
    unsigned long long _visibleOptionBufferSize;
}

@property (retain, nonatomic) UIView<NTKEditOptionContainerView> *containerView;
@property (readonly, nonatomic) unsigned long long numberOfOptions;
@property (copy, nonatomic) id /* block */ optionToViewMapper;
@property (nonatomic) unsigned long long numberOfSides;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } contentTransform;
@property (readonly, nonatomic) id selectedOption;
@property (nonatomic) unsigned long long selectedOptionIndex;
@property (nonatomic) BOOL active;

- (void).cxx_destruct;
- (id)description;
- (void)layoutSubviews;
- (id)initWithOptions:(id)a0 selectedOption:(id)a1;
- (id)_newContainerView;
- (void)_tileContainerForTransitionDirection:(long long)a0;
- (id)optionAtIndex:(unsigned long long)a0;
- (id)_selectedSideView;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_frameForContainerView;
- (Class)_sideViewClass;
- (void)_willDisplaySideView:(id)a0;
- (void)_configureSideView:(id)a0 forOption:(id)a1;
- (void)setTransitionFraction:(double)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
- (void)applyBreathingScale:(double)a0;
- (void)applyRubberBandingFraction:(double)a0;
- (void)_updateContainer;
- (void)_enumerateSideViewsWithBlock:(id /* block */)a0;
- (void)_transitionToSelectedOption;
- (void)_transitionAnimatedToSelectedOptionFromIndex:(unsigned long long)a0;
- (void)setSelectedOptionIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)decrementSelection;
- (void)incrementSelection;
- (id)_sideViewAtIndex:(unsigned long long)a0;

@end
