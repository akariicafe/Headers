@class PKRenderLoop;

@interface PKDisplayLinkTargetProxy : NSObject {
    PKRenderLoop *_target;
}

- (id)initWithTarget:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)drawWithDisplayLink:(id)a0;

@end
