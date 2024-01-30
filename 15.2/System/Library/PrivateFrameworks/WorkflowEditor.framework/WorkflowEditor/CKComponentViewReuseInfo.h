@class NSMutableArray, UIView;

@interface CKComponentViewReuseInfo : NSObject {
    UIView *_view;
    id /* block */ _didEnterReusePoolBlock;
    id /* block */ _willLeaveReusePoolBlock;
    NSMutableArray *_childViewInfos;
    BOOL _hidden;
    BOOL _ancestorHidden;
}

- (void).cxx_destruct;
- (void)didHide;
- (id)initWithView:(id)a0 didEnterReusePoolBlock:(id /* block */)a1 willLeaveReusePoolBlock:(id /* block */)a2;
- (void)registerChildViewInfo:(id)a0;
- (void)willUnhide;
- (void)ancestorDidHide;
- (void)ancestorWillUnhide;

@end
