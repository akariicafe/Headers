@class EXReadState;

@interface EXOfficeArtState : OAXDrawingState

@property (readonly, weak) EXReadState *excelState;

- (void).cxx_destruct;
- (id)initWithExcelState:(id)a0;

@end
