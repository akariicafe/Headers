@class NSOperationQueue, NSArray, NSError;

@interface VSLoadAllAppIconsOperation : VSAsyncOperation

@property (nonatomic) BOOL shouldPrecomposeIcon;
@property (retain, nonatomic) NSOperationQueue *privateQueue;
@property (retain, nonatomic) NSArray *appDescriptions;
@property (nonatomic) struct CGSize { double width; double height; } preferredSize;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ resultCompletionBlock;

- (void)executionDidBegin;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (id)initWithApps:(id)a0 shouldPrecomposeIcon:(BOOL)a1;
- (id)initWithApps:(id)a0 shouldPrecomposeIcon:(BOOL)a1 preferredSize:(struct CGSize { double x0; double x1; })a2;

@end
