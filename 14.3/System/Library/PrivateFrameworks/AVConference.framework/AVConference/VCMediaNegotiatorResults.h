@class NSString, NSMutableDictionary;

@interface VCMediaNegotiatorResults : NSObject

@property (nonatomic) BOOL supportsDynamicMaxBitrate;
@property (retain, nonatomic) NSString *remoteUserAgent;
@property (retain, nonatomic) NSString *remoteBasebandCodec;
@property (nonatomic) unsigned int remoteBasebandCodecSampleRate;
@property (retain, nonatomic) NSMutableDictionary *bandwidthSettings;
@property (nonatomic) unsigned char mediaControlInfoVersion;

- (id)init;
- (void)dealloc;

@end
