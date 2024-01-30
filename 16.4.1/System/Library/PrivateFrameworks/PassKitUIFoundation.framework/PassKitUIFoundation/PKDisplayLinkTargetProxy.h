@class PKRenderLoop;

@interface PKDisplayLinkTargetProxy : NSObject {
    PKRenderLoop *_target;
}

- (id)init;
- (void).cxx_destruct;
- (void)drawWithDisplayLink:(id)a0;

@end
