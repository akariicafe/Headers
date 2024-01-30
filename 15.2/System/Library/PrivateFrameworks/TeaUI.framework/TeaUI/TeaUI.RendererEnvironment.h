@interface TeaUI.RendererEnvironment : NSObject {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ isTesting;
    void /* unknown type, empty encoding */ isLiveResizing;
}

- (void).cxx_destruct;
- (id)init;
- (void)didStartLiveResizing:(id)a0;
- (void)didEndLiveResizing:(id)a0;

@end
