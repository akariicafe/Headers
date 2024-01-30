@interface CoreNFC.NFCTagReaderSessionDelegateSwiftWrapper : NSObject <NFCTagReaderSessionDelegate> {
    void /* unknown type, empty encoding */ swiftDelegate;
}

- (void).cxx_destruct;
- (id)init;
- (void)tagReaderSessionDidBecomeActive:(id)a0;
- (void)tagReaderSession:(id)a0 didDetectTags:(id)a1;
- (void)tagReaderSession:(id)a0 didInvalidateWithError:(id)a1;

@end
