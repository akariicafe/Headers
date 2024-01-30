@class NSString, NSMapTable;

@interface CPSNavigationBar : UINavigationBar <CPSLinearFocusProviding>

@property (retain, nonatomic) NSMapTable *lastFocusedItems;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)a0 withAnimationCoordinator:(id)a1;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)popNavigationItemAnimated:(BOOL)a0;
- (id)_linearFocusItems;

@end
