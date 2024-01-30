@class NSArray;

@interface MKTextItemViewModel : NSObject

@property (copy, nonatomic) NSArray *values;

- (unsigned long long)numberOfRows;
- (void).cxx_destruct;
- (id)stringsForRowAtIndex:(unsigned long long)a0;
- (id)initWithTextItemContainer:(id)a0 labelsFont:(id)a1 labelsSpacing:(double)a2 maxWidth:(double)a3;

@end
