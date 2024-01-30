@class NSSet, NSArray;

@interface _IKDOMConditionalExpression : NSObject {
    BOOL _isNegated;
    NSArray *_operations;
}

@property (readonly, copy, nonatomic) NSSet *dependentPathStrings;

+ (id)expressionFromString:(id)a0;
+ (id)parseExpressionsFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithOperations:(id)a0 dependentPathStrings:(id)a1 isNegated:(BOOL)a2;
- (BOOL)passesForDataItem:(id)a0;

@end
