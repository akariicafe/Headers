@class VNSession, VNSequenceRequestHandler;

@interface PTFaceAttributesNetwork : NSObject {
    VNSequenceRequestHandler *_handler;
    VNSession *_session;
}

- (id)createRequest;
- (id)init;
- (void).cxx_destruct;
- (id)faceLandmarksInPixelBuffer:(struct __CVBuffer { } *)a0 faceRects:(id)a1 orientation:(unsigned int)a2;

@end
