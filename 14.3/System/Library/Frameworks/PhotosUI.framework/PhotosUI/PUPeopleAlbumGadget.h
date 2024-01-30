@class PXPeopleAlbumProvider;

@interface PUPeopleAlbumGadget : PUAlbumGadget

@property (retain, nonatomic) PXPeopleAlbumProvider *albumProvider;

- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reconfigure;
- (void)_peopleAlbumChanged:(id)a0;
- (void)contentViewWillAppear;
- (void)_configureSubtitleForAlbumListCellContentView:(id)a0;
- (void)_setSubtitleForPeopleCount:(long long)a0 onAlbumListCellContentView:(id)a1;
- (id)title;
- (id)albumListCellContentView;

@end
