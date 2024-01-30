@class NSData, STSNFCHandoverHandler, STSHelperLibrary;

@interface STSUnifiedAccessHandler : NSObject {
    STSHelperLibrary *_parent;
    NSData *_readerSharedSecret;
    NSData *_endpointIdentifier;
    STSNFCHandoverHandler *_nfcHandoverHandler;
}

- (void).cxx_destruct;

@end
