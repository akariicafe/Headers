@class CFXClip, NSString;

@interface CFXClipCompositionDataSource : NSObject <JFXCompositionPlayableElementsDataSource>

@property (retain, nonatomic) CFXClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)colorSpace;
- (int)timeScale;
- (double)imageScale;
- (void).cxx_destruct;
- (int)duration;
- (int)frameRate;
- (struct CGSize { double x0; double x1; })renderSize;
- (long long)count;
- (struct CGSize { double x0; double x1; })frameSize;
- (BOOL)isExporting;
- (BOOL)screenCanShow2160P;
- (BOOL)use2160Pcontent:(BOOL)a0;
- (id)playableElementAtIndex:(long long)a0;
- (id)initWithClip:(id)a0;

@end
