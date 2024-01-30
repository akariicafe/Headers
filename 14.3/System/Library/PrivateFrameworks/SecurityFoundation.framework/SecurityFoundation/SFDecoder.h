@class SFCodingOptions;

@interface SFDecoder : NSObject {
    id _decoderInternal;
}

@property (copy, nonatomic) SFCodingOptions *options;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (id)decodeValueOfType:(Class)a0 fromData:(id)a1 error:(id)a2;

@end
