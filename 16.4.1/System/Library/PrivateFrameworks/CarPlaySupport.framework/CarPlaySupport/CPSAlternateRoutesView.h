@class NSArray, NSString, UIView;
@protocol CPSAlternateRouteSelecting;

@interface CPSAlternateRoutesView : UIView <CPSRouteRowInteracting, CPSLinearFocusProviding>

@property (retain, nonatomic) UIView *rowStack;
@property (retain, nonatomic) NSArray *availableRouteChoices;
@property (nonatomic) unsigned long long indexForSelectedRoute;
@property (weak, nonatomic) id<CPSAlternateRouteSelecting> selectionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)preferredFocusEnvironments;
- (void).cxx_destruct;
- (id)_linearFocusItems;
- (void)_reloadRows;
- (void)didSelectRow:(id)a0 representingRouteChoice:(id)a1;

@end
