@class NSString, NSOutputStream;

@interface HMIHTMLReport : HMFObject

@property (readonly) NSOutputStream *stream;
@property (readonly) NSString *outputPath;

+ (id)boxesForEvent:(id)a0 isTruth:(BOOL)a1;
+ (id)boxForRegionOfInterest:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)flush;
- (void).cxx_destruct;
- (void)appendString:(id)a0;
- (void)dealloc;
- (void)appendText:(id)a0;
- (void)appendHeaderWithTitle:(id)a0 textColor:(id)a1 backgroundColor:(id)a2;
- (id)_loadResource:(id)a0 withExtension:(id)a1;
- (void)appendFrame:(id)a0 text:(id)a1 boxes:(id)a2 imageBorder:(int)a3 imageColor:(id)a4 outlineBorder:(int)a5 outlineColor:(id)a6;
- (void)appendFrameResult:(id)a0 frameTruth:(id)a1 description:(id)a2;
- (id)initWithTitle:(id)a0 outputPath:(id)a1;
- (void)appendFrame:(id)a0 text:(id)a1;
- (void)appendFaceCrop:(id)a0 imageBorder:(int)a1 imageColor:(id)a2 outlineBorder:(int)a3 outlineColor:(id)a4;
- (void)appendFragmentResult:(id)a0;
- (void)appendFragmentResult:(id)a0 assetPath:(id)a1;

@end
