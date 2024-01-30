@class UIView;

@interface _UIAccessibilityInterfaceStyleVisitor : _UIViewVisitor {
    UIView *_originalVisitedView;
}

- (BOOL)_visitView:(id)a0;
- (BOOL)_prepareVisitor:(id)a0 toVisitView:(id)a1 changedSubview:(id)a2 previousWindow:(id)a3 previousSuperview:(id)a4;

@end
