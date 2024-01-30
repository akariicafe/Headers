@class TIPointError, UIKBTree;

@interface ACTKeyTap : ACTUserAction

@property (readonly, nonatomic) UIKBTree *intendedKey;
@property (readonly, nonatomic) UIKBTree *touchedKey;
@property (readonly, nonatomic) TIPointError *error;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } location;
@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) BOOL secondaryString;

- (id)description;
- (void).cxx_destruct;
- (void)applyWithTyper:(id)a0 log:(id)a1;
- (id)initWithIntendedKey:(id)a0 touchedKey:(id)a1 error:(id)a2 location:(struct CGPoint { double x0; double x1; })a3 timestamp:(double)a4 secondaryString:(BOOL)a5;

@end
