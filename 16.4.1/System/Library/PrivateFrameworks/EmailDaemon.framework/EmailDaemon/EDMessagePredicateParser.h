@class EDMessageQueryParser;

@interface EDMessagePredicateParser : NSObject

@property (readonly, nonatomic) EDMessageQueryParser *queryParser;

+ (id)parserForPredicate:(id)a0 queryParser:(id)a1;

- (void).cxx_destruct;
- (id)initWithQueryParser:(id)a0;
- (id)parseResultsFromPredicate:(id)a0;

@end
