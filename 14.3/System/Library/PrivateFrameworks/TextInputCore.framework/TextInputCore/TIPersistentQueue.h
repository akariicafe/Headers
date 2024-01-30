@class NSURL;

@interface TIPersistentQueue : NSObject {
    NSURL *_presentedItemURL;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (void)enqueueObjects:(id /* block */)a0;
- (void)readObjects:(id /* block */)a0;
- (void)dequeueObjects:(id /* block */)a0;

@end
