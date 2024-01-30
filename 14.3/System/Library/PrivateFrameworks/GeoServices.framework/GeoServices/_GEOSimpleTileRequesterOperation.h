@class NSData, NSString, NSURL, GEODataSessionTask, GEODataSession, NSObject, GEODataRequest;
@protocol GEOSimpleTileRequesterOperationDelegate, OS_os_activity, OS_dispatch_queue;

@interface _GEOSimpleTileRequesterOperation : NSObject <GEODataSessionTaskDelegate> {
    double _startTime;
    double _endTime;
    int _attempts;
    int _checksumMethod;
    _Atomic unsigned int _priority;
    BOOL _isRunning;
}

@property (readonly, nonatomic) GEODataRequest *request;
@property (nonatomic) unsigned long long signpostID;
@property (retain, nonatomic) NSObject<OS_os_activity> *activity;
@property (retain, nonatomic) NSObject<OS_os_activity> *parentTileActivity;
@property (readonly, nonatomic) NSURL *URL;
@property unsigned int priority;
@property (nonatomic) BOOL shouldDownloadToDisk;
@property (nonatomic) BOOL shouldReportAnalytics;
@property (retain, nonatomic) NSString *requestingBundleId;
@property (nonatomic) double tileLoaderCreateTime;
@property (retain, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *downloadedFileURL;
@property (retain, nonatomic) NSString *responseEtag;
@property (retain, nonatomic) GEODataSessionTask *task;
@property (readonly, nonatomic) BOOL responseIsCacheable;
@property (retain, nonatomic) NSString *editionHeader;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *baseTile;
@property (retain, nonatomic) _GEOSimpleTileRequesterOperation *localizationTile;
@property (retain, nonatomic) GEODataSession *dataSession;
@property (readonly, nonatomic) long long responseSource;
@property (nonatomic) struct _GEOTileKey { unsigned char provider : 7; unsigned char expires : 1; union { struct _GEOStandardTileKey { unsigned long reserved : 40; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned short type : 14; unsigned char pixelSize : 4; unsigned char textScale : 4; } standard; struct _GEOGloriaQuadIDTileKey { unsigned char z : 6; unsigned long quadKey : 64; unsigned short type : 14; unsigned long padding : 36; } gloriaQuad; struct _GEORegionalResourceKey { unsigned int index : 32; unsigned char scenarios : 8; unsigned char type : 6; unsigned char pixelSize : 8; unsigned char textScale : 8; unsigned char forceRefetch : 1; unsigned long padding : 57; } regional; struct _GEOSputnikMetadataKey { unsigned int part : 32; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned long padding : 42; } sputnikMetadata; struct _GEOFlyoverKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char h : 8; unsigned int region : 24; unsigned short type : 14; unsigned char pixelSize : 8; unsigned char textScale : 8; } flyover; struct _GEOTransitLineSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long muid : 64; } transitLineSelection; struct _GEOPolygonSelectionKey { unsigned char z : 6; unsigned int x : 25; unsigned int y : 25; unsigned long polyId : 64; } polygonSelection; struct _GEOTileOverlayKey { unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned char contentScale : 8; unsigned int providerId : 32; unsigned int padding : 22; } tileOverlay; struct _GEOIdentifiedResourceKey { unsigned int identifier; unsigned char levelOfDetail; unsigned char type; unsigned long padding : 64; unsigned char padding2 : 8; } identifiedResource; struct _GEOMuninMeshKey { unsigned long pointId : 64; unsigned int buildId : 32; unsigned short bucketId : 16; unsigned char cameraId : 5; unsigned char lod : 3; } muninMesh; struct _GEOVisualLocalizationTrackKey { unsigned short formatVersion; unsigned char uncertainty; unsigned short reserved : 16; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned int padding : 22; } visualLocalization; struct _GEOVisualLocalizationMetadataKey { unsigned char maxSupportedOutputVersion : 6; unsigned short maxSupportedFormatVersion : 9; unsigned int reserved : 25; unsigned char z : 6; unsigned int x : 26; unsigned int y : 26; unsigned int padding : 22; } visualLocalizationMetadata; struct _GEOVisualLocalizationDataKey { unsigned long long buildID; unsigned char uncertainty; unsigned char z : 5; unsigned int x : 21; unsigned int y : 21; unsigned char padding : 1; } visualLocalizationData; } ; } key;
@property (nonatomic) unsigned int tileEdition;
@property (readonly, nonatomic) unsigned long long contentLength;
@property (readonly, nonatomic) BOOL finished;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) int httpResponseStatusCode;
@property (readonly, nonatomic, getter=isExistingCachedDataCurrent) BOOL existingCachedDataCurrent;
@property (readonly, weak, nonatomic) id<GEOSimpleTileRequesterOperationDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (BOOL)validateTileIntegrityForTask:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (const struct _GEOTileKey { unsigned char x0 : 7; unsigned char x1 : 1; union { struct _GEOStandardTileKey { unsigned long x0 : 40; unsigned char x1 : 6; unsigned int x2 : 26; unsigned int x3 : 26; unsigned short x4 : 14; unsigned char x5 : 4; unsigned char x6 : 4; } x0; struct _GEOGloriaQuadIDTileKey { unsigned char x0 : 6; unsigned long x1 : 64; unsigned short x2 : 14; unsigned long x3 : 36; } x1; struct _GEORegionalResourceKey { unsigned int x0 : 32; unsigned char x1 : 8; unsigned char x2 : 6; unsigned char x3 : 8; unsigned char x4 : 8; unsigned char x5 : 1; unsigned long x6 : 57; } x2; struct _GEOSputnikMetadataKey { unsigned int x0 : 32; unsigned int x1 : 24; unsigned short x2 : 14; unsigned char x3 : 8; unsigned long x4 : 42; } x3; struct _GEOFlyoverKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 24; unsigned short x5 : 14; unsigned char x6 : 8; unsigned char x7 : 8; } x4; struct _GEOTransitLineSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x5; struct _GEOPolygonSelectionKey { unsigned char x0 : 6; unsigned int x1 : 25; unsigned int x2 : 25; unsigned long x3 : 64; } x6; struct _GEOTileOverlayKey { unsigned char x0 : 6; unsigned int x1 : 26; unsigned int x2 : 26; unsigned char x3 : 8; unsigned int x4 : 32; unsigned int x5 : 22; } x7; struct _GEOIdentifiedResourceKey { unsigned int x0; unsigned char x1; unsigned char x2; unsigned long x3 : 64; unsigned char x4 : 8; } x8; struct _GEOMuninMeshKey { unsigned long x0 : 64; unsigned int x1 : 32; unsigned short x2 : 16; unsigned char x3 : 5; unsigned char x4 : 3; } x9; struct _GEOVisualLocalizationTrackKey { unsigned short x0; unsigned char x1; unsigned short x2 : 16; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x10; struct _GEOVisualLocalizationMetadataKey { unsigned char x0 : 6; unsigned short x1 : 9; unsigned int x2 : 25; unsigned char x3 : 6; unsigned int x4 : 26; unsigned int x5 : 26; unsigned int x6 : 22; } x11; struct _GEOVisualLocalizationDataKey { unsigned long long x0; unsigned char x1; unsigned char x2 : 5; unsigned int x3 : 21; unsigned int x4 : 21; unsigned char x5 : 1; } x12; } x2; } *)keyPtr;
- (id)initWithRequest:(id)a0 delegateQueue:(id)a1 delegate:(id)a2;
- (void)clearAllRelatedOperations;
- (void)_recordAnalyticsWithError:(id)a0;
- (double)startTime;
- (void)start;
- (double)elapsed;
- (void)taskFailed:(id)a0 withError:(id)a1;
- (void)dataSession:(id)a0 didCompleteTask:(id)a1;

@end
