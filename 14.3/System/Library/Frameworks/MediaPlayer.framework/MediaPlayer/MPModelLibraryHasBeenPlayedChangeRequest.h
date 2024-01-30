@class MPModelObject, MPMediaLibrary;

@interface MPModelLibraryHasBeenPlayedChangeRequest : NSObject

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPModelObject *model;
@property (nonatomic) BOOL hasBeenPlayed;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
