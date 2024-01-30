@class UITapGestureRecognizer, NSString, UIImageView, NSMutableSet, UIView, NSMutableArray, UILabel;
@protocol SiriUITemplatedStackSnippetViewDataSource, SiriUITemplatedStackSnippetViewDelegate;

@interface SiriUITemplatedStackSnippetView : UIView <SiriUITemplatedView> {
    UIView *_sashOverlayView;
    UIImageView *_sashImageView;
    UILabel *_sashTitleLabel;
    UILabel *_navigationTitleLabel;
    UIView *_touchInterceptView;
    NSMutableSet *_templateSubviews;
    NSMutableArray *_keylines;
    double _auxiliaryViewHeight;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak, nonatomic) id<SiriUITemplatedStackSnippetViewDataSource> dataSource;
@property (weak, nonatomic) id<SiriUITemplatedStackSnippetViewDelegate> delegate;
@property (readonly, copy, nonatomic) NSMutableArray *stackedSubviews;
@property (readonly, nonatomic) UIView *auxiliaryView;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } templatedContentMargins;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_handleTapGesture:(id)a0;
- (double)desiredHeight;
- (void)_triggerLayoutAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)addTemplateSubview:(id)a0;
- (void)adjustAuxiliaryViewHeight:(double)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setAuxiliaryView:(id)a0 atIndex:(unsigned long long)a1 initialHeight:(double)a2 animated:(BOOL)a3 completion:(id /* block */)a4;
- (void)templateSubviewWantsToBeRemovedFromHierarchy:(id)a0;

@end
