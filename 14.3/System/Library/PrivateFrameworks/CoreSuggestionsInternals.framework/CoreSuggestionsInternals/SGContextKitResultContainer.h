@class NSArray;

@interface SGContextKitResultContainer : NSObject

@property (retain, nonatomic) NSArray *topics;
@property (retain, nonatomic) NSArray *namedEntities;
@property (retain, nonatomic) NSArray *topicsExactMatchesInSourceText;

- (void).cxx_destruct;
- (id)initWithTopics:(id)a0 namedEntities:(id)a1 topicsExactMatchesInSourceText:(id)a2;

@end
