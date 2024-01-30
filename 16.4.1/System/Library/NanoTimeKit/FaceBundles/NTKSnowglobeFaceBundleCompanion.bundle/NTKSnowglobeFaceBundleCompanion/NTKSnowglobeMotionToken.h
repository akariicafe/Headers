@class NTKSnowglobeMotionManager;

@interface NTKSnowglobeMotionToken : NSObject {
    NTKSnowglobeMotionManager *_manager;
}

@property (readonly, nonatomic) BOOL invalidated;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)initWithMotionManager:(id)a0;

@end
