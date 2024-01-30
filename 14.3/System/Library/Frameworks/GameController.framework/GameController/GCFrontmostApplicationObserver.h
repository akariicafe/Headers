@protocol GCFrontmostApplicationObserverDelegate;

@interface GCFrontmostApplicationObserver : NSObject {
    int _frontmostPid;
}

@property (weak, nonatomic) id<GCFrontmostApplicationObserverDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
