@class NSData, NSMutableDictionary;

@interface CSAdBlockerAssetDecoderV2 : NSObject

@property (retain, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) float maxFingerprintBufferSize;
@property (readonly, nonatomic) NSMutableDictionary *shouldResetAdsDictionary;

- (void).cxx_destruct;
- (id)initWithData:(id)a0;

@end
