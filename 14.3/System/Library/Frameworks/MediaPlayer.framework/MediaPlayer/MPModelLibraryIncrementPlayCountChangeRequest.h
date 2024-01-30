@class MPModelObject, MPMediaLibrary;

@interface MPModelLibraryIncrementPlayCountChangeRequest : NSObject

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPModelObject *model;

- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;

@end
