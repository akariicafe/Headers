@class NSObject, UIImageView, UILabel, NSMutableArray, UIButton;
@protocol OS_dispatch_source;

@interface SFShareAudioBringCloseViewController : SFShareAudioBaseViewController {
    NSMutableArray *_cycleImageArray;
    NSObject<OS_dispatch_source> *_cycleImageTimer;
    unsigned int _cycleNextIndex;
}

@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *shareImageView;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cycleProductImage;
- (void)eventCancel:(id)a0;

@end
