@class CFXClip, NSString;

@interface CFXExportClipDataSource : NSObject <JFXCompositionPlayableElementsDataSource>

@property (retain, nonatomic) CFXClip *clip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (int)timeScale;
- (double)imageScale;
- (id)colorSpace;
- (void).cxx_destruct;
- (int)duration;
- (long long)count;
- (BOOL)isExporting;
- (struct CGSize { double x0; double x1; })renderSize;
- (struct CGSize { double x0; double x1; })frameSize;
- (int)frameRate;
- (id)initWithClip:(id)a0;
- (BOOL)screenCanShow2160P;
- (BOOL)use2160Pcontent:(BOOL)a0;
- (id)playableElementAtIndex:(long long)a0;

@end
