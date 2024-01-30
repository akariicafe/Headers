@interface WKAirPlayRoutePicker : NSObject {
    struct RetainPtr<MPMediaControlsViewController> { void *m_ptr; } _actionSheet;
}

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (void)showFromView:(id)a0 routeSharingPolicy:(unsigned char)a1 routingContextUID:(id)a2 hasVideo:(BOOL)a3;

@end
