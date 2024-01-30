@class NSString, VideoAttributes, NSObject;
@protocol VCVideoCaptureServer;

@interface VCVideoCapture : NSObject {
    id _captureServer;
    NSString *_sourceUID;
    VideoAttributes *_localVideoAttributes;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _sinkArrayMutex;
    unsigned int _sinkCount;
    struct _VCSingleLinkedList { struct _VCSingleLinkedListEntry *head; BOOL initialized; void /* function */ *compare; unsigned long long countEntries; } _sinkList;
}

@property (readonly) unsigned int sinkCount;
@property (readonly) NSObject<VCVideoCaptureServer> *captureServer;

- (void)dealloc;
- (unsigned int)addSink:(id)a0;
- (void)cleanupSinkEntry:(struct tagVCVideoCaptureSinkEntry { struct _VCSingleLinkedListEntry { struct _VCSingleLinkedListEntry *x0; } x0; id x1; id /* block */ x2; } *)a0;
- (id)initWithCaptureServer:(id)a0;
- (unsigned int)removeSink:(id)a0;

@end
