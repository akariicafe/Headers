@class NSArray;

@interface ACHPredicateExpressionValidationResult : NSObject

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, retain, nonatomic) NSArray *issues;

- (void).cxx_destruct;
- (id)initWithValid:(BOOL)a0 issues:(id)a1;

@end
