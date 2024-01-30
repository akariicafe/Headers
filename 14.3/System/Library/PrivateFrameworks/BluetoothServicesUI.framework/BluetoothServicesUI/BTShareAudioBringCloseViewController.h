@class NSMutableArray, NSObject, UIImageView, UILabel, UIView, UIButton;
@protocol OS_dispatch_source;

@interface BTShareAudioBringCloseViewController : BTShareAudioBaseViewController {
    NSMutableArray *_cycleImageArray;
    NSObject<OS_dispatch_source> *_cycleImageTimer;
    unsigned int _cycleNextIndex;
}

@property (retain, nonatomic) UILabel *infoLabel;
@property (retain, nonatomic) UIImageView *bannerImageView;
@property (retain, nonatomic) UIView *productImageContainerView;
@property (retain, nonatomic) UIImageView *shareImageView;
@property (retain, nonatomic) UIButton *cancelButton;

- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cycleProductImage;
- (void)eventCancel:(id)a0;

@end
