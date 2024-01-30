@interface SBFObserver : NSObject

+ (void)sendArray:(id)a0 error:(id)a1 toObserver:(id)a2;
+ (id)observerWithResultBlock:(id /* block */)a0 completionBlock:(id /* block */)a1 failureBlock:(id /* block */)a2;
+ (void)sendObserver:(id)a0 resultsOfBlock:(id /* block */)a1;
+ (id)observerWithResultBlock:(id /* block */)a0;

@end
