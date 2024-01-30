@protocol GCFrontmostApplicationObserverDelegate;

@interface GCFrontmostApplicationObserver : NSObject {
    int _frontmostPid;
}

@property (weak, nonatomic) id<GCFrontmostApplicationObserverDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;

@end
