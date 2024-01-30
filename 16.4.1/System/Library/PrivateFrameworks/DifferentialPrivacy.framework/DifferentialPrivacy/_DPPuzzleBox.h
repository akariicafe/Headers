@interface _DPPuzzleBox : NSObject

@property (readonly, nonatomic) unsigned long long k;

+ (id)puzzleBoxWithDimensionality:(unsigned long long)a0;

- (id)init;
- (id)puzzlePieceFor:(id)a0;
- (id)initWithDimensionality:(unsigned long long)a0;

@end
