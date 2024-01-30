@class PXPeopleAlbumProvider;

@interface PUPeopleAlbumGadget : PUAlbumGadget

@property (retain, nonatomic) PXPeopleAlbumProvider *albumProvider;

- (void)reconfigure;
- (id)albumListCellContentView;
- (void)_configureSubtitleForAlbumListCellContentView:(id)a0;
- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void)contentViewWillAppear;
- (void)_setSubtitleForPeopleCount:(long long)a0 onAlbumListCellContentView:(id)a1;
- (id)title;
- (void)_peopleAlbumChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
