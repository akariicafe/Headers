@class MPModelLibraryFavoriteEntityChangeRequest, MusicKit_SoftLinking_MPModelObject;

@interface MusicKit_SoftLinking_MPModelLibraryFavoriteEntityChangeRequest : NSObject {
    MPModelLibraryFavoriteEntityChangeRequest *_underlyingFavoriteEntityChangeRequest;
}

@property (readonly, nonatomic) MPModelLibraryFavoriteEntityChangeRequest *_underlyingFavoriteEntityChangeRequest;
@property (retain, nonatomic) MusicKit_SoftLinking_MPModelObject *modelObject;
@property (nonatomic, getter=isFavorite) BOOL favorite;

- (id)init;
- (void).cxx_destruct;

@end
