@class NSString, NSMutableDictionary, NSArray;

@interface PLAggregateEntry : NSObject

@property (retain) NSString *entryKey;
@property (retain, nonatomic) NSMutableDictionary *matchingKeyToValue;
@property (retain) NSArray *otherAggregateKeys;
@property (retain) NSString *aggregateKey;
@property double aggregateValue;
@property short aggregateFunction;

- (id)aggregateOperationWithMatchingPairs:(id)a0;
- (id)matchingPairs;
- (id)query;
- (void)updateWithValue:(double)a0;
- (void).cxx_destruct;
- (id)description;

@end
