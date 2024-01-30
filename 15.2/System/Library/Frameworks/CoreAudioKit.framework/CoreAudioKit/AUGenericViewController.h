@class AUGenericViewInternal, AUAudioUnit, UIColor;

@interface AUGenericViewController : UIViewController {
    struct OpaqueAudioComponentInstance { } *au;
}

@property (readonly) AUGenericViewInternal *genericView;
@property (retain, nonatomic) AUAudioUnit *auAudioUnit;
@property (retain, nonatomic) UIColor *tintColor;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setAudioUnit:(struct OpaqueAudioComponentInstance { } *)a0;
- (void)genericViewNotificationMessageReceived:(id)a0;
- (void)genericViewBeginGestureMessageReceived:(id)a0;
- (void)genericViewEndGestureMessageReceived:(id)a0;
- (id)getAuAudioUnit;
- (id)getTintColor;

@end
