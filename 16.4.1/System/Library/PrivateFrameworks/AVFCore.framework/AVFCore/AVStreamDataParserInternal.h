@class AVWeakReference, NSError, AVContentKeySession, NSArray, AVContentKeyRequest, NSMutableDictionary, NSObject, NSMutableArray, AVAsset;
@protocol OS_dispatch_queue, AVStreamDataParserOutputHandling;

@interface AVStreamDataParserInternal : NSObject {
    id<AVStreamDataParserOutputHandling> _delegate;
    NSObject<OS_dispatch_queue> *_threadSafetyQ;
    long long _status;
    NSError *_error;
    AVAsset *_asset;
    NSMutableArray *_trackIDsNotProvidingMedia;
    NSArray *_allowableMIMETypes;
    struct OpaqueFigManifold { } *_figManifold;
    unsigned long long _typeIdOfInitialFigManifold;
    struct OpaqueCMBlockBuffer { } *_accumulatedInitializationData;
    BOOL _encounteredStreamDiscontinuity;
    AVWeakReference *_legacyStreamSession;
    AVContentKeySession *_defaultContentKeySession;
    AVWeakReference *_contentKeySession;
    AVContentKeyRequest *_sessionKeyRequest;
    BOOL _startedUsingInternalContentKeySession;
    int _currentTrackID;
    NSMutableDictionary *_tracksBecomingReadyByTrackID;
    NSMutableArray *_samplesBeforeReady;
    unsigned long long _samplesBeforeReadyTotalSize;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _samplesBeforeReadyTotalDuration;
    NSMutableDictionary *_trackDecryptorsByTrackID;
    NSMutableDictionary *_trackFormatDescriptionsByTrackID;
}

@end
