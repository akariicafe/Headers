@class NSArray, NSString;
@protocol PADModelLoader, PADAuditDataRepository;

@interface PADVNFacePoseRequest : NSObject <PADVNRequestProtocol> {
    id<PADModelLoader> _models;
    id<PADAuditDataRepository> _audit;
}

@property (readonly, nonatomic) NSArray *results;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)performOn:(id)a0 error:(id *)a1;
- (void)_detectFaceBounds:(id)a0 error:(id *)a1;
- (struct __CVBuffer { } *)_obtainFaceCrop:(id)a0 error:(id *)a1;
- (void)_storeCrop:(struct __CVBuffer { } *)a0 forFrame:(id)a1 observation:(id)a2;

@end
