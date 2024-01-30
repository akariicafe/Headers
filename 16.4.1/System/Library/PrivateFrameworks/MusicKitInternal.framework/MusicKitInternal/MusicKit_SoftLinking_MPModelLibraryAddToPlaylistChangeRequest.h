@class MusicKit_SoftLinking_MPModelObject, NSArray, MPModelLibraryAddToPlaylistChangeRequest;

@interface MusicKit_SoftLinking_MPModelLibraryAddToPlaylistChangeRequest : NSObject {
    MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryAddToPlaylistChangeRequest *_underlyingLibraryAddToPlaylistChangeRequest;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *playlist;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *referralObject;
@property (copy, nonatomic) NSArray *songResults;
@property (copy, nonatomic) id /* block */ storeImportAllowedHandler;

- (id)init;
- (void).cxx_destruct;

@end
