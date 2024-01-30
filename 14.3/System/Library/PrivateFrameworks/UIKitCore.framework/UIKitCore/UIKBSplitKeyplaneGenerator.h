@class NSDictionary, UIKBTree, UIKeyboardTransitionSlice, NSMutableArray, UIKeyboardSliceSet;

@interface UIKBSplitKeyplaneGenerator : NSObject {
    NSMutableArray *_rows;
    NSDictionary *_splitLayoutHints;
    UIKBTree *_sourceKeyboard;
    UIKBTree *_sourceKeyplane;
    struct CGSize { double width; double height; } _splitKeySizeFactor;
    struct CGSize { double width; double height; } _keyboardSize;
    double _leftSideWidestRow;
    double _rightSideWidestRow;
    long long _keyboardType;
    UIKeyboardSliceSet *_sliceSet;
    UIKeyboardTransitionSlice *_leftSlice;
    UIKeyboardTransitionSlice *_rightSlice;
}

- (id)keysOrderedByPosition;
- (void)addSliceStart:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 end:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 startToken:(id)a2 endToken:(id)a3 left:(BOOL)a4 normalization:(int)a5 isDefaultWidth:(BOOL)a6 row:(int)a7;
- (id)init;
- (void)dealloc;
- (void)splitSpaceKey:(id)a0 leftSpace:(id)a1 left:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 right:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)commitUncommittedSlices;
- (void)addKey:(id)a0 withShape:(id)a1 forRow:(id)a2 attribs:(id)a3 left:(BOOL)a4 force:(BOOL)a5 isDefaultWidth:(BOOL)a6;
- (void)alignSpaceKeyEdges;
- (void)initializeGeneratorForKeyplane:(id)a0 name:(id)a1;
- (void)organizeKeyplaneIntoRows;
- (id)finalizeSplitKeyplane;
- (void)splitRow:(id)a0;
- (id)generateRivenKeyplaneFromKeyplane:(id)a0 forKeyboard:(id)a1;
- (id)hintsForRow:(id)a0;

@end
