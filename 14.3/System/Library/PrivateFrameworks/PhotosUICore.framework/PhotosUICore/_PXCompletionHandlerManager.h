@class NSMutableArray;
@protocol _PXCompletionHandlerManagerDelegate;

@interface _PXCompletionHandlerManager : NSObject {
    NSMutableArray *_completionHandlers;
}

@property (weak, nonatomic) id<_PXCompletionHandlerManagerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)_handleTimeoutOfCompletionHandler:(id /* block */)a0;
- (void)callCompletionHandlers;

@end
