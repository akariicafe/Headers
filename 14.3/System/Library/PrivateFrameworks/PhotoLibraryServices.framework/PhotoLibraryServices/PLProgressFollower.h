@class NSProgress;

@interface PLProgressFollower : NSObject {
    id /* block */ _progressHandler;
}

@property (retain) NSProgress *outputProgress;
@property (readonly) NSProgress *sourceProgress;

- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithSourceProgress:(id)a0 progressHandler:(id /* block */)a1;

@end
