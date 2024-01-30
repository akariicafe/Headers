@class CXNamespace, OAXDrawingState;

@interface ODXState : OCXReadState {
    OAXDrawingState *mOfficeArtState;
}

@property (retain, nonatomic) CXNamespace *ODXDiagramNamespace;

- (void).cxx_destruct;
- (void)setupNSForXMLFormat:(int)a0;
- (id)initWithOfficeArtState:(id)a0;
- (id)officeArtState;

@end
