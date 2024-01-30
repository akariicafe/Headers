@class NSArray, CUTResult;

@interface CUTAsyncReducer : NSObject

@property (retain, nonatomic) NSArray *input;
@property (retain, nonatomic) CUTResult *result;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ reducerBlock;

- (void).cxx_destruct;
- (void)_completeWithResult:(id)a0;
- (id)initWithInput:(id)a0 initialValue:(id)a1;
- (void)reduceWithCompletion:(id /* block */)a0;
- (void)_reduceWithPending:(id)a0 visited:(id)a1 currentResult:(id)a2 completion:(id /* block */)a3;

@end
