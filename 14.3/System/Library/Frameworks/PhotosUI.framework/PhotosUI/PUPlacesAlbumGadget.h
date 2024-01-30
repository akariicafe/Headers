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

- (id)initWithCollection:(id)a0 albumGadgetDelegate:(id)a1;
- (void).cxx_destruct;
- (void)_updateImageInContentView:(id)a0 animated:(BOOL)a1;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_extendedTraitCollectionDidChange:(unsigned long long)a0;
- (void)_updateSubtitleInContentView:(id)a0 animated:(BOOL)a1;
- (void)placesSnapshotDidChange;
- (void)placesSnapshotCountDidChange;
- (id)title;
- (id)albumListCellContentView;

@end
