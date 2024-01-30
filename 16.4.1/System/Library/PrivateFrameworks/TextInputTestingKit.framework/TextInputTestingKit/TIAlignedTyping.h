@class NSArray, TIContinuousPath;

@interface TIAlignedTyping : TIAlignedTokens

@property (copy, nonatomic) NSArray *touched;
@property (copy, nonatomic) NSArray *predicted;
@property (copy, nonatomic) NSArray *inserted;
@property (copy, nonatomic) NSArray *documentStates;
@property (retain, nonatomic) TIContinuousPath *path;

- (void).cxx_destruct;

@end
