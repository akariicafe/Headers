@class VCPFaceTimeSession, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface VCPVideoChatAnalysis : NSObject {
    NSObject<OS_dispatch_queue> *_detectionQueue;
    VCPFaceTimeSession *_faceTimeSession;
    NSMutableArray *_faces;
    BOOL _finished;
}

+ (id)videoChatAnalysis;

- (id)init;
- (void).cxx_destruct;
- (int)detectFaces:(struct __CVBuffer { } *)a0;
- (void)checkAddFaces;
- (int)analyzeFrame:(struct __CVBuffer { } *)a0;
- (BOOL)persistAnalysis;

@end
