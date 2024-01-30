@class NSArray;

@interface PXCompoundNumberFilter : PXNumberFilter

@property (copy, nonatomic) NSArray *filters;

- (void).cxx_destruct;
- (double)updatedOutput;

@end
