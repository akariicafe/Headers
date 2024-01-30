@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id /* block */ _completionHandler;
}

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)invokeWithRoutePredictions:(id)a0 predictionContext:(id)a1;
- (id)init;
- (void)dealloc;

@end
