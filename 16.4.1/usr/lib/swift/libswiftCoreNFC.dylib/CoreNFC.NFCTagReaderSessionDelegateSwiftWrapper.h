@interface CoreNFC.NFCTagReaderSessionDelegateSwiftWrapper : NSObject <NFCTagReaderSessionDelegate> {
    void /* unknown type, empty encoding */ swiftDelegate;
}

- (id)init;
- (void).cxx_destruct;
- (void)tagReaderSession:(id)a0 didDetectTags:(id)a1;
- (void)tagReaderSession:(id)a0 didInvalidateWithError:(id)a1;
- (void)tagReaderSessionDidBecomeActive:(id)a0;

@end
