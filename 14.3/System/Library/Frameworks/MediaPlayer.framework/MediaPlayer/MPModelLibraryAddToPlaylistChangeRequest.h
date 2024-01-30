@class MPModelPlaylist, MPModelObject, MPSectionedCollection;

@interface MPModelLibraryAddToPlaylistChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelPlaylist *playlist;
@property (retain, nonatomic) MPModelObject *representativeModelObject;
@property (retain, nonatomic) MPModelObject *referralObject;
@property (retain, nonatomic) MPSectionedCollection *songResults;
@property (copy, nonatomic) id /* block */ storeImportAllowedHandler;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
