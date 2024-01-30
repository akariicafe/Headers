@class NSArray;

@interface QLPXCompoundNumberFilter : QLPXNumberFilter

@property (copy, nonatomic) NSArray *filters;

- (double)updatedOutput;
- (void).cxx_destruct;

@end
