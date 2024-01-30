@interface _CNLazyArrayOperator : NSObject <_CNLazyArrayOperation>

@property (readonly) _CNLazyArrayOperator *input;

- (id)nextObject;
- (id)initWithInput:(id)a0;
- (void).cxx_destruct;

@end
