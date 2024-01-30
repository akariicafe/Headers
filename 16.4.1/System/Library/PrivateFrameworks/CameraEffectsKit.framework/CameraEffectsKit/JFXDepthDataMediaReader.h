@class JFXMediaReaderDepthData, JFXDepthDecompressor, NSString, NSError, NSObject;
@protocol OS_dispatch_queue, JFXMediaVideoTrackReader;

@interface JFXDepthDataMediaReader : NSObject <JFXMediaVideoTrackReader>

@property (readonly, nonatomic) id<JFXMediaVideoTrackReader> reader;
@property (retain, nonatomic) NSError *lastDecodeError;
@property (retain, nonatomic) JFXMediaReaderDepthData *cachedDepthData;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue;
@property (retain, nonatomic) JFXDepthDecompressor *depthDecompressor;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } readableTimeRange;
@property (nonatomic) BOOL isScrubbing;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) unsigned long long signPostID;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)JFX_cachedDepthDataForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)JFX_decompressAVDepthDataFromVideoTrackReaderSample:(id)a0;
- (id)JFX_readDepthDataForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (BOOL)beginReading;
- (BOOL)beginReadingAtTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a0;
- (id)depthDataForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (id)initWithVideoTrackReader:(id)a0;
- (id)videoSampleForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
