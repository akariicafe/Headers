@class NSString, PUAlbumListCellContentView, PXPlacesAlbumCoverProvider;

@interface PUPlacesAlbumGadget : PUAlbumGadget <PXPlacesSnapshotFactoryDelegate, PXChangeObserver> {
    PUAlbumListCellContentView *_albumListCellContentView;
    NSString *_title;
}

@property (readonly, nonatomic) PXPlacesAlbumCoverProvider *placesAlbumCoverProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)actionManager;
- (id)title;
- (void).cxx_destruct;
- (void)_extendedTraitCollectionDidChange:(unsigned long long)a0;
- (void)_updateImageInContentView:(id)a0 animated:(BOOL)a1;
- (void)_updateSubtitleInContentView:(id)a0 animated:(BOOL)a1;
- (id)albumListCellContentView;
- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void)placesSnapshotCountDidChange;
- (void)placesSnapshotDidChange;

@end
