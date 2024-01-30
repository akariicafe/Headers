@class NSURL;

@interface TIPersistentQueue : NSObject {
    NSURL *_presentedItemURL;
}

- (id)initWithURL:(id)a0;
- (void)enqueueObjects:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dequeueObjects:(id /* block */)a0;
- (void)readObjects:(id /* block */)a0;

@end
