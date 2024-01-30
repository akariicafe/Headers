@class NSMutableData;

@interface WBXMLData : NSObject {
    NSMutableData *_data;
    unsigned char _currentCodePage;
    BOOL _haveAppliedCurrentCodePage;
    NSMutableData *_stateStack;
}

@property (readonly, nonatomic) NSMutableData *data;

- (void)appendData:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)appendString:(id)a0;
- (void)appendInt:(int)a0;
- (void)switchToCodePage:(unsigned char)a0;
- (void)openTag:(unsigned char)a0;
- (void)appendTag:(unsigned char)a0 withIntContent:(int)a1;
- (void)appendTag:(unsigned char)a0 withStringContent:(id)a1;
- (void)closeTag:(unsigned char)a0;
- (void)appendEmptyTag:(unsigned char)a0;
- (void)_applyCurrentCodePage;
- (void)renderProspectiveTags;
- (void)appendByteArrayData:(id)a0;
- (id)dataExpectCompleteData:(BOOL)a0;
- (unsigned char)currentCodePage;
- (void)openProspectiveTag:(unsigned char)a0;
- (void)closeProspectiveTag:(unsigned char)a0;
- (void)appendTag:(unsigned char)a0 withStringContentAsData:(id)a1;
- (void)appendTag:(unsigned char)a0 withByteArrayDataContent:(id)a1;

@end
