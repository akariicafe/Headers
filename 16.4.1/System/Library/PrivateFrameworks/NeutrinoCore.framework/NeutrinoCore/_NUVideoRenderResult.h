@class NUImageGeometry, AVAsset, AVComposition, NSString, AVAudioMix, AVVideoComposition;
@protocol NURenderStatistics;

@interface _NUVideoRenderResult : _NURenderResult <NUVideoRenderResult>

@property (retain) AVAsset *video;
@property (retain) AVVideoComposition *videoComposition;
@property (retain) AVAudioMix *audioMix;
@property (retain) NUImageGeometry *geometry;
@property (readonly) AVComposition *avAsset;
@property (readonly) AVVideoComposition *avVideoComposition;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
