@class NSString, NSMutableArray;

@interface OADStyleMatrix : NSObject {
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}

@property (copy, nonatomic) NSString *name;

+ (id)objectInArray:(id)a0 withPossiblyOutOfRangeIndex:(unsigned long long)a1 defaultValue:(id)a2;

- (BOOL)isEmpty;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)strokeCount;
- (id)effectsAtIndex:(unsigned long long)a0;
- (void)addBgFill:(id)a0;
- (void)addEffects:(id)a0;
- (void)addFill:(id)a0;
- (void)addStroke:(id)a0;
- (id)bgFillAtIndex:(unsigned long long)a0;
- (unsigned long long)bgFillCount;
- (id)effectsAtIndex:(unsigned long long)a0 color:(id)a1;
- (unsigned long long)effectsCount;
- (id)fillAtIndex:(unsigned long long)a0;
- (id)fillAtIndex:(unsigned long long)a0 color:(id)a1;
- (unsigned long long)fillCount;
- (void)padArray:(id)a0 withContentsOfArray:(id)a1;
- (id)strokeAtIndex:(unsigned long long)a0;
- (id)strokeAtIndex:(unsigned long long)a0 color:(id)a1;
- (void)validateStyleMatrix;

@end
