@class EXReadState, EBReaderState;

@interface EBOfficeArtReaderState : OABReaderState {
    EXReadState *mXmlDocumentState;
}

@property (readonly, weak) EBReaderState *readerState;

- (void).cxx_destruct;
- (id)xmlDrawingState;
- (id)initWithReaderState:(id)a0;

@end
