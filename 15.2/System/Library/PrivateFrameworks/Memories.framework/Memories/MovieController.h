@class AVMutableVideoComposition, Project, NSString, AVPlayerItem, CALayer, AVAssetImageGenerator, AVMutableComposition, AVMutableAudioMix, Composition;

@interface MovieController : NSObject <MovieControllerExportProtocol> {
    float m_rate;
}

@property long long customImageGenCount;
@property (retain) AVAssetImageGenerator *customImageGen;
@property (retain) Composition *composition;
@property BOOL forExport;
@property double exportAspect;
@property (readonly, nonatomic) AVPlayerItem *playerItem;
@property (copy) id /* block */ playerReadyCompletionBlock;
@property (readonly, nonatomic) AVMutableComposition *AVComposition;
@property (retain) Project *project;
@property (readonly, nonatomic) CALayer *compositionLayer;
@property (retain, nonatomic) CALayer *playerLayer;
@property (readonly, nonatomic) AVMutableVideoComposition *videoComposition;
@property (readonly, nonatomic) AVMutableAudioMix *audioMix;
@property struct CGSize { double width; double height; } size;
@property (copy, nonatomic) id /* block */ progressUpdateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerWithProject:(id)a0 forExport:(BOOL)a1;
+ (id)imageFromProject:(id)a0 atTime:(int)a1 withSize:(struct CGSize { double x0; double x1; })a2;

- (void).cxx_destruct;
- (void)dealloc;
- (void)updateComposition;
- (void)applyPlayerItemProperties;
- (void)clearPlayerItemProperties;
- (void)resetSizeToDefault;
- (id)imageAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (void)resetSizeToNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (void)cancelAllUIImageGeneration;
- (void)setProjectOnComposition;
- (void)tearDownProjectDisplay;
- (void)updateForProjectTimeInSeconds:(double)a0 asynchronous:(BOOL)a1 allowUnloading:(BOOL)a2;
- (void)renderBothOrientationsOfFirstFrameAtSize:(struct CGSize { double x0; double x1; })a0 withCompletion:(id /* block */)a1;
- (void)generateUIImagesAsynchronouslyForSize:(struct CGSize { double x0; double x1; })a0 atTimes:(id)a1 completionHandler:(id /* block */)a2;
- (void)generateOrigUIImagesAsynchronouslyForSize:(struct CGSize { double x0; double x1; })a0 atTimes:(id)a1 completionHandler:(id /* block */)a2;

@end
