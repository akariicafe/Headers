@interface _UIMotionEffectsVisitor : _UIViewVisitor {
    BOOL _subviewAddedToHierarchy;
    unsigned long long _countOfMotionEffectsInSubview;
}

- (BOOL)_visitView:(id)a0;
- (BOOL)_prepareVisitor:(id)a0 toVisitView:(id)a1 changedSubview:(id)a2 previousWindow:(id)a3 previousSuperview:(id)a4;

@end
