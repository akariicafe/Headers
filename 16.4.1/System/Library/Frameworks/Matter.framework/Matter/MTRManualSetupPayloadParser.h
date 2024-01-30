@class NSString;

@interface MTRManualSetupPayloadParser : NSObject {
    NSString *_decimalStringRepresentation;
    void *_chipManualSetupPayloadParser;
}

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDecimalStringRepresentation:(id)a0;
- (id)populatePayload:(id *)a0;

@end
