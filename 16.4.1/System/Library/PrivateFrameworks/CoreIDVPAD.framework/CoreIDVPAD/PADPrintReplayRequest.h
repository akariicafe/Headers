@class NSArray, NSString, PADModelLoader;
@protocol PADAuditDataRepository;

@interface PADPrintReplayRequest : NSObject <PADVNRequestProtocol> {
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
- (void)_auditStorePRDBuffer:(struct __CVBuffer { } *)a0 name:(id)a1;
- (BOOL)_detectFaceBounds:(id)a0 error:(id *)a1;
- (double)_dispatchPRDRequestStage2ForFrame:(id)a0 error:(id *)a1;
- (BOOL)_doesNotMeetPoseRequirement:(id)a0;
- (BOOL)performOn:(id)a0 error:(id *)a1;

@end
