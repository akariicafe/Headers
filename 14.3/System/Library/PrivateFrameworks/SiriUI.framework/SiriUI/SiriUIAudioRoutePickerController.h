@class NSString, SiriRoutePickerAlertController, UIWindow;
@protocol SiriUIAudioRoutePickerControllerDelegate;

@interface SiriUIAudioRoutePickerController : NSObject {
    NSString *_audioCategory;
    NSString *_audioMode;
    UIWindow *_window;
    BOOL _hasRoutesToPick;
    BOOL _bluetoothIsPicked;
}

@property (weak, nonatomic) id<SiriUIAudioRoutePickerControllerDelegate> delegate;
@property (retain, nonatomic) SiriRoutePickerAlertController *pickerAlertController;

+ (id)_nameForRouteInfo:(id)a0 isSelected:(BOOL *)a1 isBluetooth:(BOOL *)a2 isOverride:(BOOL *)a3 audioRouteName:(id *)a4;

- (void).cxx_destruct;
- (void)dealloc;
- (void)_pickableRoutesChanged:(id)a0;
- (void)_routeChanged:(id)a0;
- (void)refreshRoutes;
- (void)_showAlertControllerFromViewController:(id)a0 animated:(BOOL)a1;
- (void)_selectRouteWithInfo:(id)a0;
- (void)_dismissAlertController:(BOOL)a0;
- (void)_fetchPickableRoutesWithCompletion:(id /* block */)a0;
- (void)_removeWindow;
- (BOOL)isShowingPicker;
- (void)cancelPickerAnimated:(BOOL)a0;
- (id)initWithCategory:(id)a0 mode:(id)a1 delegate:(id)a2;
- (BOOL)hasRoutesToPick;
- (BOOL)bluetoothIsPicked;
- (void)showPickerFromViewController:(id)a0 animated:(BOOL)a1;

@end
