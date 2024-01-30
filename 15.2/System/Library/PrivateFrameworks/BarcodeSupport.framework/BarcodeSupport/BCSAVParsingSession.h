@class NSDictionary, BCSQRCodeParser;

@interface BCSAVParsingSession : NSObject {
    BCSQRCodeParser *_parser;
    NSDictionary *_lastScannedCodeBasicDescriptor;
    double _lastScannedTime;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)updateSessionWithMetadataObjects:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_isLikelyLastScannedObject:(id)a0;
- (id)_bestObjectForParsing:(id)a0;
- (BOOL)_shouldSkipIncomingObject:(id)a0;
- (void)_updateSessionWithMetadataObject:(id)a0 completionHandler:(id /* block */)a1;
- (double)_temporalStickyFactorForObject:(id)a0;
- (void)updateSessionWithMetadataObjects:(id)a0;

@end
