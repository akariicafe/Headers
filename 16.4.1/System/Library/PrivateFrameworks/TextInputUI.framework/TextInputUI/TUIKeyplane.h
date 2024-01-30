@class NSArray, NSMutableDictionary, UIKBTree, NSString;

@interface TUIKeyplane : NSObject

@property (retain, nonatomic) NSArray *defaultKeysByRow;
@property (retain, nonatomic) NSArray *variantKeysByRow;
@property (retain, nonatomic) UIKBTree *fullTree;
@property (retain, nonatomic) UIKBTree *keylayout;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (nonatomic) long long layoutClass;
@property (nonatomic) long long currentVariantType;
@property (nonatomic) long long indexOfLastRow;
@property (nonatomic) struct CGSize { double width; double height; } leftSplitSize;
@property (nonatomic) struct CGSize { double width; double height; } rightSplitSize;
@property (readonly, nonatomic) NSArray *orderedKeysByRow;
@property (readonly, nonatomic) unsigned long long numberOfRows;
@property (nonatomic) long long layoutType;
@property (readonly, nonatomic) long long keyLayoutStyle;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *prefix;

+ (double)baseHeightForLayoutClass:(long long)a0 landscape:(BOOL)a1;
+ (id)keyplaneFromKBTree:(id)a0;
+ (id)keyplaneFromKBTree:(id)a0 withType:(long long)a1;
+ (long long)layoutClassFromKeyplaneName:(id)a0;
+ (long long)layoutClassFromScreenDimensions:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })sizeBasisForLayoutClass:(long long)a0;
+ (struct CGSize { double x0; double x1; })sizeFromScreenTraits:(id)a0 layoutClass:(long long)a1;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)createPreparedKeyFromTree:(id)a0 withMultiplier:(double)a1 type:(long long)a2;
- (id)defaultKeysOrderedByRowForKeyplane:(id)a0;
- (id)defaultRowSet;
- (id)duplicateTreeForSplitMode:(id)a0;
- (double)finalHeightForSplitKeyboard;
- (double)finalSplitSizeForRightSide:(BOOL)a0;
- (BOOL)hasSimilarLayoutToKeyplane:(id)a0;
- (double)heightMultiplierForRowNumber:(unsigned long long)a0;
- (id)keyRowFromTreeRow:(id)a0 rowNumber:(unsigned long long)a1 type:(long long)a2;
- (long long)keyStyleForLayoutClass:(long long)a0;
- (long long)layoutTypeFromDisplayType:(int)a0;
- (double)multiplierForKey:(id)a0 withProperties:(id)a1;
- (unsigned long long)numberOfKeys;
- (id)rowSetForType:(long long)a0;
- (id)rowsForKeyboardType:(long long)a0;
- (BOOL)shouldDuplicateKey:(id)a0 forRow:(id)a1;
- (id)sortedKeysForKeyplane:(id)a0;
- (id)stringFromKeyboardType:(long long)a0;
- (id)stringFromLayoutClass:(long long)a0;
- (id)stringFromLayoutStyle:(long long)a0;
- (id)stringFromLayoutType:(long long)a0;
- (void)updateKeyboardType:(long long)a0;
- (BOOL)variantTypeIncludesSpaceBar:(long long)a0;

@end
