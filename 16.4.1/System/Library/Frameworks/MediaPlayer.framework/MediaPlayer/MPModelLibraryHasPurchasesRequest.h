@class MPModelKind, MPModelObject, MPMediaLibrary;

@interface MPModelLibraryHasPurchasesRequest : NSObject

@property (retain, nonatomic) MPModelObject *modelObject;
@property (retain, nonatomic) MPMediaLibrary *mediaLibrary;
@property (retain, nonatomic) MPModelKind *itemKind;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)newOperationWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
