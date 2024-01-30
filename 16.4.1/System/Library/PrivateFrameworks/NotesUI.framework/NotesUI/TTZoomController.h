@interface TTZoomController : NSObject

@property (nonatomic) double zoomFactor;
@property (nonatomic) double checklistZoomFactor;

- (id)init;
- (id)zoomAttributes:(id)a0;
- (id)reallyZoomAttributedString:(id)a0 zoomDirection:(BOOL)a1;
- (id)reallyZoomAttributes:(id)a0 zoomDirection:(BOOL)a1;
- (id)reallyZoomFontInAttributes:(id)a0 zoomDirection:(BOOL)a1;
- (id)unzoomAttributedString:(id)a0;
- (id)unzoomAttributes:(id)a0;
- (id)unzoomFont:(id)a0;
- (id)unzoomFontInAttributes:(id)a0;
- (id)zoomAttributedString:(id)a0;
- (id)zoomFont:(id)a0;
- (id)zoomFontInAttributes:(id)a0;

@end
