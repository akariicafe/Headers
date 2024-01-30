@class UILabel, UIButton, NSError;

@interface BTShareAudioErrorViewController : BTShareAudioBaseViewController

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UILabel *internalLabel;
@property (retain, nonatomic) UIButton *dismissButton;
@property (copy, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)eventDismiss:(id)a0;

@end
