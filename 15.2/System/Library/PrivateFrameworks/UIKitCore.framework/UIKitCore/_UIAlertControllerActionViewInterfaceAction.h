@class UIAlertAction, _UIAlertControllerActionView, NSString;

@interface _UIAlertControllerActionViewInterfaceAction : UIInterfaceAction <UIAlertActionMutablePropertyObservering>

@property (readonly, nonatomic) _UIAlertControllerActionView *alertControllerActionView;
@property (readonly, nonatomic) UIAlertAction *underlyingAlertAction;
@property (readonly, nonatomic) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionWithAlertControllerActionView:(id)a0;

- (void)_action:(id)a0 changedToBePreferred:(BOOL)a1;
- (void)_action:(id)a0 changedToChecked:(BOOL)a1;
- (void)_initializeStateFromUnderlyingAlertAction;
- (id)classificationTitle;
- (void)_action:(id)a0 changedToTitle:(id)a1;
- (void)_action:(id)a0 changedToTitleTextAlignment:(long long)a1;
- (long long)_typeForDeterminingViewRepresentation;
- (id)alertControllerActionView;
- (void).cxx_destruct;
- (id)leadingImage;
- (void)invalidate;
- (long long)type;
- (void)dealloc;
- (void)_action:(id)a0 updatedTitleTextColor:(id)a1;
- (void)_action:(id)a0 changedToEnabled:(BOOL)a1;
- (void)_action:(id)a0 updatedImageTintColor:(id)a1;

@end
