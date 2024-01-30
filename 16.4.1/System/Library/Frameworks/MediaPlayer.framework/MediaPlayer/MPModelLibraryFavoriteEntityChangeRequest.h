@class MPModelLibraryFavoriteEntityRequestAction, MPModelObject;

@interface MPModelLibraryFavoriteEntityChangeRequest : NSObject <NSCopying>

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPModelLibraryFavoriteEntityRequestAction *requestAction;
@property (nonatomic) BOOL isFavorite;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
