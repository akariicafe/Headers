@class NSMutableData;

@interface WBXMLData : NSObject {
    NSMutableData *_data;
    unsigned char _currentCodePage;
    BOOL _haveAppliedCurrentCodePage;
    NSMutableData *_stateStack;
}

@property (readonly, nonatomic) NSMutableData *data;

- (void)appendString:(id)a0;
- (void)appendData:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)appendInt:(int)a0;
- (void)appendEmptyTag:(unsigned char)a0;
- (unsigned char)currentCodePage;
- (void)_applyCurrentCodePage;
- (void)appendByteArrayData:(id)a0;
- (void)appendTag:(unsigned char)a0 withByteArrayDataContent:(id)a1;
- (void)appendTag:(unsigned char)a0 withIntContent:(int)a1;
- (void)appendTag:(unsigned char)a0 withStringContent:(id)a1;
- (void)appendTag:(unsigned char)a0 withStringContentAsData:(id)a1;
- (void)closeProspectiveTag:(unsigned char)a0;
- (void)closeTag:(unsigned char)a0;
- (id)dataExpectCompleteData:(BOOL)a0;
- (void)openProspectiveTag:(unsigned char)a0;
- (void)openTag:(unsigned char)a0;
- (void)renderProspectiveTags;
- (void)switchToCodePage:(unsigned char)a0;

@end
