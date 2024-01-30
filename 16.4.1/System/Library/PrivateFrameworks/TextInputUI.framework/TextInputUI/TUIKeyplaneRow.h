@class TUIKeyplaneView, NSArray, UILayoutGuide, TUIKBKeyView, NSMutableArray;

@interface TUIKeyplaneRow : UIView

@property (weak, nonatomic) TUIKeyplaneView *hostView;
@property (nonatomic) unsigned long long leftControlKeyCount;
@property (nonatomic) unsigned long long rightControlKeyCount;
@property (retain, nonatomic) NSMutableArray *letterKeyConstraints;
@property (retain, nonatomic) NSMutableArray *keyViews;
@property (retain, nonatomic) NSMutableArray *layoutGuidesForRow;
@property (retain, nonatomic) NSMutableArray *constraintsForSplitRow;
@property (retain, nonatomic) NSMutableArray *constraintsForUnsplitRow;
@property (retain, nonatomic) TUIKBKeyView *extraSpaceBar;
@property (retain, nonatomic) NSArray *currentKeys;
@property (retain, nonatomic) UILayoutGuide *keySizingGuide;
@property (nonatomic) long long rowNumberInKeyplane;
@property (retain, nonatomic) UILayoutGuide *splitSpacingGuide;
@property (nonatomic) long long rowType;
@property (nonatomic) BOOL edgeToEdge;

+ (id)emptyRowForKeyplane:(id)a0 rowNumber:(long long)a1;
+ (id)rowForKeyplane:(id)a0 keys:(id)a1 letterKeyGuide:(id)a2;

- (void)setRenderConfig:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)keyIsSpaceType:(id)a0;
- (id)constraintsForStringKeys:(id)a0 inRowGuide:(id)a1 matchingSizingGuide:(id)a2 splitIndex:(long long)a3;
- (BOOL)keyIsControlType:(id)a0;
- (BOOL)keyIsStringType:(id)a0;
- (void)layoutRowWithKeys:(id)a0 guide:(id)a1 type:(long long)a2;
- (void)resetRow;
- (id)splitLayoutGuide;
- (void)toggleConstraintsForSplit:(BOOL)a0;
- (void)updateKeysForTransition:(BOOL)a0;
- (void)updateKeysInRowWithData:(id)a0;
- (void)updateKeysInRowWithStyle:(long long)a0 factory:(id)a1;

@end
