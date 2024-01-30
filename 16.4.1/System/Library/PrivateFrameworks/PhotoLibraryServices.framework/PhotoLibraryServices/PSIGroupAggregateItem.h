@class NSArray, PSIGroup, NSValue, PSIQueryToken;

@interface PSIGroupAggregateItem : NSObject

@property (retain, nonatomic) PSIQueryToken *searchToken;
@property (retain, nonatomic) NSValue *rangeMatchingToken;
@property (retain, nonatomic) PSIGroup *group;
@property (retain, nonatomic) NSArray *assetIds;
@property (retain, nonatomic) NSArray *collectionIds;

- (void).cxx_destruct;
- (void)reset;

@end
