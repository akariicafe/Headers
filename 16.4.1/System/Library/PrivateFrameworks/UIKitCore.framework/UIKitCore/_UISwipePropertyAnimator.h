@class NSHashTable;

@interface _UISwipePropertyAnimator : UIViewPropertyAnimator {
    NSHashTable *_viewsToAnimateAdditively;
}

- (void)addViewsToAnimateAdditively:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_shouldAnimateAdditivelyForView:(id)a0 withKeyPath:(id)a1;
- (void).cxx_destruct;

@end
