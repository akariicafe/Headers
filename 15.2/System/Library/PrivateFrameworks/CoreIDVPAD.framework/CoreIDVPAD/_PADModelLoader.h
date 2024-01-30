@class PADVNPrintReplayS1Model, PADVNPrintReplayS2Model, NSString, PADVNFacePoseModel;

@interface _PADModelLoader : NSObject <PADModelLoader>

@property (readonly, nonatomic) PADVNFacePoseModel *facePoseModel;
@property (readonly, nonatomic) PADVNPrintReplayS1Model *printReplayS1Model;
@property (readonly, nonatomic) PADVNPrintReplayS2Model *printReplayS2Model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
