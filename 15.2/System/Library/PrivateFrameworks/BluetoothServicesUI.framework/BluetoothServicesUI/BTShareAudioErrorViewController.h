@class UILabel, UIButton, NSError;

@interface BTShareAudioErrorViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *internalLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) NSError *error;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)eventDismiss:(id)a0;

@end
