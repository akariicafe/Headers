@class NSOperationQueue;

@interface TSKDocumentRootICloudObserver : NSObject {
    long long _identifier;
    NSOperationQueue *_operationQueue;
    id /* block */ _block;
}

@property (readonly, nonatomic) long long identifer;

- (void)dealloc;
- (id)initWithBlock:(id /* block */)a0;
- (void)invokeWithDocumentRoot:(id)a0;

@end
