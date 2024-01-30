@class UIKBTree, NSMutableArray, UIKBTouchState;

@interface UIKeyboardTouchInfo : NSObject

@property (readonly, nonatomic) NSMutableArray *touchHistory;
@property (readonly, nonatomic) UIKBTouchState *touch;
@property (nonatomic) unsigned long long processedTouchCount;
@property (retain, nonatomic) UIKBTree *key;
@property (retain, nonatomic) UIKBTree *keyplane;
@property (retain, nonatomic) UIKBTree *slidOffKey;
@property (nonatomic) struct CGPoint { double x; double y; } initialPoint;
@property (nonatomic) struct CGPoint { double x; double y; } initialDragPoint;
@property (nonatomic) BOOL dragged;
@property (nonatomic) int stage;
@property (nonatomic) int fingerID;
@property (nonatomic) BOOL maySuppressUpAction;
@property (nonatomic) int initialKeyState;
@property (nonatomic) long long continuousPathState;
@property (nonatomic) BOOL delayed;

- (void)addTouch:(id)a0;
- (id)init;
- (void)dealloc;

@end
