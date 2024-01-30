@class TIKeyboardTouchEvent, NSMutableArray, TIKeyboardLayout;

@interface TISKTap : NSObject

@property (retain, nonatomic) NSMutableArray *dragTouches;
@property (retain, nonatomic) TIKeyboardTouchEvent *firstTouch;
@property (retain, nonatomic) TIKeyboardTouchEvent *lastTouch;
@property (readonly, nonatomic) unsigned long long numberOfDrags;
@property (nonatomic) long long pathIndex;
@property (retain, nonatomic) TIKeyboardLayout *layout;
@property (readonly, nonatomic, getter=isDownUpTap) BOOL downup;

- (void).cxx_destruct;
- (long long)_forcedKeyCode;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getFrameForKey:(id)a0;
- (void)addDragTouch:(id)a0;
- (double)distance:(id)a0 withTouch:(id)a1;
- (double)downErrorDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init:(id)a0 layout:(id)a1;
- (id)stringForIntendedKey;
- (double)totalTapDistance;
- (double)upErrorDistance:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
