@interface TTZoomController : NSObject

@property (nonatomic) double zoomFactor;
@property (nonatomic) double checklistZoomFactor;

- (id)init;
- (id)unzoomAttributedString:(id)a0;
- (id)reallyZoomFontInAttributes:(id)a0 zoomDirection:(BOOL)a1;
- (id)zoomFont:(id)a0;
- (id)unzoomFont:(id)a0;
- (id)reallyZoomAttributes:(id)a0 zoomDirection:(BOOL)a1;
- (id)reallyZoomAttributedString:(id)a0 zoomDirection:(BOOL)a1;
- (id)zoomFontInAttributes:(id)a0;
- (id)unzoomFontInAttributes:(id)a0;
- (id)zoomAttributes:(id)a0;
- (id)unzoomAttributes:(id)a0;
- (id)zoomAttributedString:(id)a0;

@end
