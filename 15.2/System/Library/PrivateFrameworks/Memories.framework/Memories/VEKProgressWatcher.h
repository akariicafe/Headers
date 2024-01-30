@class VEKProgress;

@interface VEKProgressWatcher : NSObject

@property (nonatomic) BOOL progressIncludesDownload;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (retain, nonatomic) VEKProgress *progress;
@property (weak, nonatomic) id observedObject;

- (void).cxx_destruct;
- (id)initWithObservedObject:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;

@end
