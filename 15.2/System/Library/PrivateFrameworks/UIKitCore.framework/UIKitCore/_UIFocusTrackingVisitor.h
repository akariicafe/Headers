@interface _UIFocusTrackingVisitor : _UIViewVisitor {
    BOOL _subviewAddedToHierarchy;
    unsigned long long _countOfFocusedAncestorTrackingViewsInSubtree;
}

- (BOOL)_visitView:(id)a0;
- (BOOL)_prepareVisitor:(id)a0 toVisitView:(id)a1 changedSubview:(id)a2 previousWindow:(id)a3 previousSuperview:(id)a4;

@end
