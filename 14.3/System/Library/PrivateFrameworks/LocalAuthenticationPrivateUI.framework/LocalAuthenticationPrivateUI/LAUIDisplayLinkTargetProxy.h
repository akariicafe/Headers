@class LAUIRenderLoop;

@interface LAUIDisplayLinkTargetProxy : NSObject {
    LAUIRenderLoop *_target;
}

- (id)initWithTarget:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)draw:(id)a0;

@end
