@class NSArray;

@interface PUGroupValueFilter : PUValueFilter

@property (copy, nonatomic) NSArray *filters;

- (double)outputValue;
- (void).cxx_destruct;
- (void)setInputValue:(double)a0;

@end
