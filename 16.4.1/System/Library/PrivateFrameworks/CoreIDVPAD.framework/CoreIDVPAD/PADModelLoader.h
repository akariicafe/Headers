@class PADVNPrintReplayS2Model, PADVNFacePoseModel;

@interface PADModelLoader : NSObject

@property (readonly, nonatomic) PADVNFacePoseModel *facePoseModel;
@property (readonly, nonatomic) PADVNPrintReplayS2Model *printReplayS2Model;

- (id)initWithCompletion:(id /* block */)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
