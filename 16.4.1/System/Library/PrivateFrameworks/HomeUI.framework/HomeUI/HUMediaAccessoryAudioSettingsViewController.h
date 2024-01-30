@class NAFuture, HFMediaSystemBuilder, NSString, HUMediaAccessoryAudioSettingsItemManager;
@protocol HUPresentationDelegate;

@interface HUMediaAccessoryAudioSettingsViewController : HUItemTableViewController <HUHomePodStereoSwapperCellDelegate, HUHomePodDetailViewDelegate, HUDetailsPresentationDelegateHost>

@property (readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder;
@property (readonly, nonatomic) HUMediaAccessoryAudioSettingsItemManager *itemManager;
@property (retain, nonatomic) NAFuture *accessoryIdentifyFuture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate;

- (id)item;
- (void).cxx_destruct;
- (id)_homePodStereoSwapperCell;
- (void)_updateSwapperCell:(id)a0;
- (BOOL)automaticallyUpdatesViewControllerTitle;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)didPressSwapButton:(id)a0;
- (void)didTapSpeaker:(id)a0;
- (id)initWithMediaSystemBuilder:(id)a0 mediaAccessoryItem:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
