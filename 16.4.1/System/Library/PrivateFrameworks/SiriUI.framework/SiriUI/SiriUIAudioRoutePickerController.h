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

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isShowingPicker;
- (BOOL)hasRoutesToPick;
- (id)initWithCategory:(id)a0 mode:(id)a1 delegate:(id)a2;
- (BOOL)bluetoothIsPicked;
- (void)cancelPickerAnimated:(BOOL)a0;
- (void)refreshRoutes;
- (void)showPickerFromViewController:(id)a0 animated:(BOOL)a1;
- (void)_dismissAlertController:(BOOL)a0;
- (void)_fetchPickableRoutesWithCompletion:(id /* block */)a0;
- (void)_pickableRoutesChanged:(id)a0;
- (void)_removeWindow;
- (void)_routeChanged:(id)a0;
- (void)_selectRouteWithInfo:(id)a0;
- (void)_showAlertControllerFromViewController:(id)a0 animated:(BOOL)a1;

@end
