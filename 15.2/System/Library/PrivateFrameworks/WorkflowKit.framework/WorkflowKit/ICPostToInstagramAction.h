@class WFFileRepresentation;

@interface ICPostToInstagramAction : ICDocumentAction

@property (retain, nonatomic) WFFileRepresentation *instagramRepresentation;

- (void).cxx_destruct;
- (void)dealloc;
- (id)inputContentClasses;
- (void)performActionWithInput:(id)a0 parameters:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (void)appDidResume:(id)a0;
- (void)shareAsALAssetWithItem:(id)a0 caption:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;
- (void)shareAsImageFileWithItem:(id)a0 caption:(id)a1 userInterface:(id)a2 successHandler:(id /* block */)a3 errorHandler:(id /* block */)a4;

@end
