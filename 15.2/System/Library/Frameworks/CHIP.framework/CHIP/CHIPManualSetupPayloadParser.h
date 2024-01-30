@class NSString;

@interface CHIPManualSetupPayloadParser : NSObject {
    NSString *_decimalStringRepresentation;
    void *_chipManualSetupPayloadParser;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)populatePayload:(id *)a0;
- (id)initWithDecimalStringRepresentation:(id)a0;

@end
