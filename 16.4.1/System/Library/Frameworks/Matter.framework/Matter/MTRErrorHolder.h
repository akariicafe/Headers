@interface MTRErrorHolder : NSObject

@property (readonly, nonatomic) struct ChipError { unsigned int mError; char *mFile; unsigned int mLine; } error;

- (id)initWithError:(struct ChipError { unsigned int x0; char *x1; unsigned int x2; })a0;

@end
