@class PXPeopleAlbumProvider;

@interface PUPeopleAlbumGadget : PUAlbumGadget

@property (retain, nonatomic) PXPeopleAlbumProvider *albumProvider;

- (id)actionManager;
- (void)dealloc;
- (id)title;
- (void).cxx_destruct;
- (void)contentViewWillAppear;
- (void)_configureSubtitleForAlbumListCellContentView:(id)a0;
- (void)_peopleAlbumChanged:(id)a0;
- (void)_setSubtitleForPeopleCount:(long long)a0 onAlbumListCellContentView:(id)a1;
- (id)albumListCellContentView;
- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void)reconfigure;

@end
