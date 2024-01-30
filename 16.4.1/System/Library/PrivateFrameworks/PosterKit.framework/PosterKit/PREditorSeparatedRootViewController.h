@class NSMutableDictionary, UIView;

@interface PREditorSeparatedRootViewController : PREditorRootViewController {
    NSMutableDictionary *_viewsForLook;
}

@property (retain, nonatomic) UIView *underscrollView;
@property (retain, nonatomic) UIView *overscrollView;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)looksWillChange;
- (id)currentLookViews;
- (void)looksDidChange;
- (id)viewsForLook:(id)a0;

@end
