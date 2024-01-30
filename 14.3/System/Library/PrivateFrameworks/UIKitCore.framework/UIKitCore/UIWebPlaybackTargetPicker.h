@class NSString, MPAVRoutingController, MPAudioVideoRoutingPopoverController, MPAVRoutingSheet, UIWebDocumentView;

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate> {
    MPAVRoutingController *_routingController;
    MPAudioVideoRoutingPopoverController *_popoverController;
    MPAVRoutingSheet *_actionSheet;
    UIWebDocumentView *_delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowDidRotate:(id)a0;
- (void)_presentAirPlayPopoverAnimated:(BOOL)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showAirPlayPickerIPad:(long long)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)showAirPlayPickerIPhone:(long long)a0;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (void)show:(BOOL)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)setDelegate:(id)a0;
- (void)_windowWillRotate:(id)a0;

@end
