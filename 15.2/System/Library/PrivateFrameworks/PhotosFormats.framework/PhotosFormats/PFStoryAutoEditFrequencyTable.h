@class NSArray, NSMutableArray, NSNumber;
@protocol PFRandomNumberGenerator;

@interface PFStoryAutoEditFrequencyTable : NSObject {
    NSArray *_baseTable;
    NSMutableArray *_workingElements;
    id<PFRandomNumberGenerator> _randomNumberGenerator;
    NSNumber *_fallbackValue;
}

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)nextValuePassingTest:(id /* block */)a0;
- (id)initWithValueCounts:(id)a0 randomNumberGenerator:(id)a1 fallbackValue:(id)a2;
- (BOOL)hasValue:(id)a0;
- (id)nextValue;

@end
