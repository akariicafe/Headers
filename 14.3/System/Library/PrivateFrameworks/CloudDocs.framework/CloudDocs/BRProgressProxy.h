@class NSURL;
@protocol BRProgressProxyDelegate;

@interface BRProgressProxy : NSProgress {
    NSURL *_url;
    id _globalProgressSubscriber;
}

@property (weak) id<BRProgressProxyDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (id)initWithURL:(id)a0;
- (void)start;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;

@end
