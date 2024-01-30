@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {
    GEOMapRequestManager *_requestManager;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;
@property (readonly, nonatomic) BOOL isFinished;

- (void)complete;
- (id)initWithManager:(id)a0;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_finishAndCallHandler:(id /* block */)a0;

@end
