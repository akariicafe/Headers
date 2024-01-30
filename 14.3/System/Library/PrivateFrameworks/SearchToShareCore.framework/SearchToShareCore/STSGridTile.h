@class NSArray, NSNumber;

@interface STSGridTile : NSObject

@property (copy, nonatomic) NSArray *smallIndexes;
@property (retain, nonatomic) NSNumber *largeIndex;
@property (nonatomic) long long layoutStyle;

- (void).cxx_destruct;
- (id)description;

@end
