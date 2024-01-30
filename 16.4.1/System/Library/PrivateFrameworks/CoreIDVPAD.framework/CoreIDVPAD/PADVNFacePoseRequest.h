@class NSArray, NSString, PADModelLoader;
@protocol PADAuditDataRepository;

@interface PADVNFacePoseRequest : NSObject <PADVNRequestProtocol> {
    PADModelLoader *_models;
    id<PADAuditDataRepository> _audit;
}

@property (readonly, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithModels:(id)a0;
- (BOOL)_detectFaceBounds:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)_obtainFaceCrop:(id)a0 error:(id *)a1;
- (void)_storeCrop:(struct __CVBuffer { } *)a0 forFrame:(id)a1 observation:(id)a2;
- (BOOL)performOn:(id)a0 error:(id *)a1;

@end
