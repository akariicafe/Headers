@class TIKeyboardTouchEvent, NSMutableArray, TIKeyboardLayout;

@interface TISKTap : NSObject

@property (retain, nonatomic) NSMutableArray *dragTouches;
@property (retain, nonatomic) TIKeyboardTouchEvent *firstTouch;
@property (retain, nonatomic) TIKeyboardTouchEvent *lastTouch;
@property (nonatomic) unsigned long long numberOfDrags;
@property (nonatomic) long long pathIndex;
@property (retain, nonatomic) TIKeyboardLayout *layout;
@property (nonatomic, getter=isDownUpTap) BOOL downup;

- (void).cxx_destruct;
- (long long)_forcedKeyCode;
- (id)init:(id)a0 layout:(id)a1;
- (void)addDragTouch:(id)a0;
- (double)downErrorDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)upErrorDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFrameForKey:(id)a0;
- (id)stringForIntendedKey;
- (double)distance:(id)a0 withTouch:(id)a1;
- (double)totalTapDistance;

@end
