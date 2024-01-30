@class CFXClip, NSString;

@interface CFXClipCompositionDataSource : NSObject <JFXCompositionPlayableElementsDataSource>

@property (retain, nonatomic) CFXClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)imageScale;
- (int)duration;
- (BOOL)isExporting;
- (long long)count;
- (int)frameRate;
- (int)timeScale;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })renderSize;
- (id)colorSpace;
- (struct CGSize { double x0; double x1; })frameSize;
- (id)initWithClip:(id)a0;
- (id)playableElementAtIndex:(long long)a0;
- (BOOL)screenCanShow2160P;
- (BOOL)use2160Pcontent:(BOOL)a0;

@end
