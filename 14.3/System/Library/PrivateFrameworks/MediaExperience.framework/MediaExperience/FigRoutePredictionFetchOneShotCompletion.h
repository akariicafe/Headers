@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id /* block */ _completionHandler;
}

- (id)init;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)invokeWithRoutePredictions:(id)a0 predictionContext:(id)a1;

@end
