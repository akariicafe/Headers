@class NSArray;

@interface _UIKBRTKeyboardTouchObserver : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } fCenter;
@property (nonatomic) struct CGPoint { double x; double y; } jCenter;
@property (nonatomic) struct CGSize { double width; double height; } keySize;
@property (retain, nonatomic) NSArray *rowOffsets;
@property (nonatomic) int homeRowOffsetIndex;
@property (retain, nonatomic) NSArray *rowXEdges;
@property (retain, nonatomic) NSArray *rowYEdgesLeft;
@property (retain, nonatomic) NSArray *rowYEdgesRight;

- (void).cxx_destruct;
- (void)reset;
- (void)addTouchLocation:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 withIdentifier:(id)a2;
- (void)addTouchLocation:(struct CGPoint { double x0; double x1; })a0 withRadius:(double)a1 withTouchTime:(double)a2 withIdentifier:(id)a3;
- (void)moveTouchWithIdentifier:(id)a0 toLocation:(struct CGPoint { double x0; double x1; })a1 withRadius:(double)a2 atTouchTime:(double)a3;
- (void)removeTouchWithIdentifier:(id)a0;
- (void)removeTouchWithIdentifier:(id)a0 touchCancelled:(BOOL)a1;
- (void)updateWithFCenter:(struct CGPoint { double x0; double x1; })a0 jCenter:(struct CGPoint { double x0; double x1; })a1 keySize:(struct CGSize { double x0; double x1; })a2 rowOffsets:(id)a3 homeRowOffsetIndex:(int)a4;

@end
