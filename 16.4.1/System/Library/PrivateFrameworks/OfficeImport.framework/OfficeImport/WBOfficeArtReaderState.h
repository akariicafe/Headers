@class WBReader, WXReadState;

@interface WBOfficeArtReaderState : OABReaderState {
    WXReadState *mXmlDocumentState;
}

@property (weak, nonatomic) WBReader *reader;
@property (nonatomic) int currentTextType;

- (id)initWithClient:(Class)a0;
- (void).cxx_destruct;
- (id)xmlDrawingState;

@end
