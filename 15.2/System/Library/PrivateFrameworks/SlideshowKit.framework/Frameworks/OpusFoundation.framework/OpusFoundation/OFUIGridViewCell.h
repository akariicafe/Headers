@class UILongPressGestureRecognizer, NSString, OFUIGridViewItem, NSMutableArray, UITapGestureRecognizer;

@interface OFUIGridViewCell : UIView <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer *_longPressRecognizer;
    BOOL _continuousSelection;
    BOOL _selected;
}

@property (readonly, copy, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) long long index;
@property (readonly, retain, nonatomic) NSMutableArray *operations;
@property (retain, nonatomic) OFUIGridViewItem *item;
@property (readonly, retain, nonatomic) UITapGestureRecognizer *singleTapRecognizer;
@property (readonly, retain, nonatomic) UITapGestureRecognizer *selectAllRecognizer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gridView;
- (void)commonInit;
- (void)handleTap:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)hasOperations;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)selectionColor;
- (void)setSelected:(BOOL)a0;
- (void)cancelAllOperations;
- (id)initWithReuseIdentifier:(id)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)dealloc;
- (void)addOperation:(id)a0;
- (void)removeOperation:(id)a0;
- (void)setOperationsPriority:(long long)a0;
- (void)startDragging:(id)a0;
- (void)handleSelectAll:(id)a0;
- (void)_setHighlightedOnCell:(BOOL)a0;
- (void)showSelectionBorder:(BOOL)a0;
- (id)newDraggingItem;
- (unsigned long long)countOperations;
- (void)enumerateOperations:(id /* block */)a0;

@end
