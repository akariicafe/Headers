@class NSString, NSProgress;

@interface MCResourceProgressObserver : NSObject {
    BOOL _progressObserversSet;
}

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSProgress *progress;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void)invalidate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)initWithName:(id)a0 progress:(id)a1 cancelHandler:(id /* block */)a2;

@end
