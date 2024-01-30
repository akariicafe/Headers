@class MPModelObject, MPMediaLibrary;

@interface MPModelLibraryHasBeenPlayedChangeRequest : NSObject

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPModelObject *model;
@property (nonatomic) BOOL hasBeenPlayed;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
