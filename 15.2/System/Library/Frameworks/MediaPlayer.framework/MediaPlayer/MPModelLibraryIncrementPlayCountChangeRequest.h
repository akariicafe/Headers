@class MPModelObject, MPMediaLibrary;

@interface MPModelLibraryIncrementPlayCountChangeRequest : NSObject

@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (readonly, nonatomic) MPModelObject *model;

- (void).cxx_destruct;
- (id)initWithModel:(id)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;

@end
