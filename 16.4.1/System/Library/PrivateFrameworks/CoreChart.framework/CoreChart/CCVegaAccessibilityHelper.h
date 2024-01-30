@class NSMutableArray;

@interface CCVegaAccessibilityHelper : NSObject {
    struct stack<CCVegaAccessibilityHelperState, std::deque<CCVegaAccessibilityHelperState>> { struct deque<CCVegaAccessibilityHelperState, std::allocator<CCVegaAccessibilityHelperState>> { struct __split_buffer<CCVegaAccessibilityHelperState *, std::allocator<CCVegaAccessibilityHelperState *>> { struct **__first_; struct **__begin_; struct **__end_; struct __compressed_pair<CCVegaAccessibilityHelperState **, std::allocator<CCVegaAccessibilityHelperState *>> { struct **__value_; } __end_cap_; } __map_; unsigned long long __start_; struct __compressed_pair<unsigned long, std::allocator<CCVegaAccessibilityHelperState>> { unsigned long long __value_; } __size_; } c; } _stateStack;
    struct { struct CGPoint { double x; double y; } origin; BOOL ariaHidden; } _currentState;
    NSMutableArray *_elementCache;
    NSMutableArray *_rootAccessibilityElements;
    NSMutableArray *_children;
    NSMutableArray *_groupStack;
}

@property (weak) id container;

- (void)restoreState;
- (id).cxx_construct;
- (void)saveState;
- (void).cxx_destruct;
- (id)initWithElements:(id)a0;
- (void)addElementWithLabel:(id)a0 roleDescription:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)enterGroupWithLabel:(id)a0 roleDescription:(id)a1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)exitGroup;
- (id)getElements;
- (void)markAriaHidden;
- (id)newAccessibilityElementWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)translateX:(double)a0 Y:(double)a1;

@end
