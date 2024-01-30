@class NUImageGeometry, AVAsset, NSString, AVVideoComposition;
@protocol NURenderStatistics;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult>

@property (retain) AVAsset *video;
@property (retain) AVVideoComposition *videoComposition;
@property (retain) struct CGImage { } *photo;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } photoTime;
@property (retain) NUImageGeometry *videoGeometry;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;

@end
