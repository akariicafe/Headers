@class NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface FigCPEFPAirPlaySession : NSObject {
    BOOL _invalid;
    unsigned int _fairPlayContext;
    NSDictionary *_protectionInfo;
    NSDictionary *_contentInfo;
    struct __CFAllocator { } *_fairPlayDeallocator;
    struct OpaqueFigEndpointPlaybackSession { } *_playbackSession;
    NSString *_mediaControlUUID;
    unsigned int _vodkaVersion;
    struct FPStreamOpaque_ { } *_fairPlaySession;
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

- (void)endSession;
- (void)dealloc;
- (void)authorizeItemCompletionHandler_objc:(struct { id x0; struct __CFString *x1; id x2; id /* block */ x3; } *)a0 picData:(struct __CFData { } *)a1 playerGUID:(struct __CFString { } *)a2 error:(int)a3;
- (void)beginSessionWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (id)createPicRequestWithError:(id *)a0;
- (id)initWithFairPlayContext:(unsigned int)a0 contentInfo:(id)a1 routeInfo:(id)a2 playbackSession:(struct OpaqueFigEndpointPlaybackSession { } *)a3 mediaControlUUID:(id)a4;
- (id)initWithFairPlayContext:(unsigned int)a0 protectionInfo:(id)a1 routeInfo:(id)a2 playbackSession:(struct OpaqueFigEndpointPlaybackSession { } *)a3 mediaControlUUID:(id)a4;
- (id)initWithFairPlayContext:(unsigned int)a0 routeInfo:(id)a1 playbackSession:(struct OpaqueFigEndpointPlaybackSession { } *)a2 mediaControlUUID:(id)a3;
- (id)legacySinfs;
- (id)mediaControlParamsWithStoreResponse:(id)a0;
- (id)sicWithPic:(id)a0;

@end
