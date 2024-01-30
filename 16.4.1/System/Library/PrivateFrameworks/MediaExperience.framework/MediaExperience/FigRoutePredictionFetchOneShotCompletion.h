@interface FigRoutePredictionFetchOneShotCompletion : NSObject {
    id /* block */ _completionHandler;
}

- (void)invokeWithRoutePredictions:(id)a0 predictionContext:(id)a1;
- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (id)init;

@end
