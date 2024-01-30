@class UIAlertController, PXAlertConfiguration;

@interface PXAlert : NSObject {
    BOOL _didLoad;
}

@property (readonly, nonatomic) PXAlertConfiguration *configuration;
@property (readonly, nonatomic) UIAlertController *alertController;

+ (id)show:(id /* block */)a0;
+ (id)showForError:(id)a0;
+ (id)showWithConfiguration:(id)a0;

- (id)init;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_present;
- (void)_loadIfNeeded;
- (void)dismissWithCompletionHandler:(id /* block */)a0;

@end
