@class NSArray, NSMutableArray;

@interface UIKBWatch10KeyLayout : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    NSArray *_leftControlKeyFrames;
    NSArray *_rightControlKeyFrames;
    NSMutableArray *_gridKeyFrames;
}

@property (nonatomic) long long leftControlKeys;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } leftControlKeysInsets;
@property (nonatomic) long long gridRows;
@property (nonatomic) long long gridColumns;
@property (nonatomic) long long rightControlKeys;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } rightControlKeysInsets;
@property (nonatomic) double controlKeyWidthRatio;

- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForGridKeyAt:(long long)a0 inRow:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForLeftControlKeyAt:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForRightControlKeyAt:(long long)a0;
- (id)layoutControlKeys:(long long)a0 in:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
