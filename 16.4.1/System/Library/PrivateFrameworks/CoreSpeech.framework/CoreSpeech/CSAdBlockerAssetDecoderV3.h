@class NSData, NSMutableDictionary, NSString;

@interface CSAdBlockerAssetDecoderV3 : NSObject

@property (retain, nonatomic) NSData *payloadData;
@property (readonly, nonatomic) float maxFingerprintBufferSize;
@property (readonly, nonatomic) NSMutableDictionary *shouldResetAdsDictionary;
@property (readonly, nonatomic) NSString *assetVersion;

- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
