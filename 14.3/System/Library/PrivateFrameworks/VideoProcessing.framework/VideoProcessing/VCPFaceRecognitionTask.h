@class NSArray;

@interface VCPFaceRecognitionTask : NSOperation {
    NSArray *_sessions;
}

- (id)init;
- (void).cxx_destruct;
- (id)recognizeFace:(id)a0;
- (id)recognizeFaces:(id)a0;

@end
