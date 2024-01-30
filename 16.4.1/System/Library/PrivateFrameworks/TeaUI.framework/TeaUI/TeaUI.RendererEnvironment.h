@interface TeaUI.RendererEnvironment : NSObject {
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ isTesting;
    void /* unknown type, empty encoding */ isLiveResizing;
}

- (id)init;
- (void).cxx_destruct;
- (void)didEndLiveResizing:(id)a0;
- (void)didStartLiveResizing:(id)a0;

@end
