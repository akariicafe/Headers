@interface NAUniqueArrayDiffOptions : NSObject

@property (copy, nonatomic) id /* block */ equalComparator;
@property (copy, nonatomic) id /* block */ hashGenerator;
@property (copy, nonatomic) id /* block */ changeComparator;
@property (nonatomic) BOOL allowMoves;

- (void).cxx_destruct;
- (id)init;

@end
