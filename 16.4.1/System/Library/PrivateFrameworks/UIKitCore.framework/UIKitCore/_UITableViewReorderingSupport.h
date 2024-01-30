@class NSTimer, UITableViewCell, UIShadowView, NSIndexPath;

@interface _UITableViewReorderingSupport : NSObject {
    UITableViewCell *_reorderedCell;
    NSIndexPath *_initialIndexPath;
    NSIndexPath *_targetIndexPath;
    unsigned char _oldShowHorizontalScrollIndicator : 1;
    unsigned char _oldShowVerticalScrollIndicator : 1;
    unsigned char _reloadDataCalled : 1;
    unsigned char _reorderingCancelled : 1;
    NSTimer *_autoscrollTimer;
    UIShadowView *_topShadowView;
    UIShadowView *_bottomShadowView;
    BOOL _wasScrollingEnabled;
}

- (void).cxx_destruct;

@end
