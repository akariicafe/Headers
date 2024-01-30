@class NSArray;

@interface PUGroupValueFilter : PUValueFilter

@property (copy, nonatomic) NSArray *filters;

- (void).cxx_destruct;
- (double)outputValue;
- (void)setInputValue:(double)a0;

@end
