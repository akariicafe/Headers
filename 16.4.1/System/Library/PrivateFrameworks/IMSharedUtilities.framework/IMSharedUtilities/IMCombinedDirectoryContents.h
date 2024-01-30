@class NSArray;

@interface IMCombinedDirectoryContents : IMDirectoryContents

@property (readonly, nonatomic) NSArray *directoryContents;

- (void).cxx_destruct;
- (id)combineArrays:(id)a0 rhs:(id)a1;
- (void)gather;
- (id)initWithCombinedDirectoryContents:(id)a0;

@end
