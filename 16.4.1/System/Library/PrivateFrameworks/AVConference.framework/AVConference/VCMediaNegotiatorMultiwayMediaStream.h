@interface VCMediaNegotiatorMultiwayMediaStream : NSObject <NSCopying>

@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (nonatomic) unsigned int maxPacketsPerSecond;
@property (nonatomic) BOOL isSubstream;
@property (nonatomic) unsigned short streamID;
@property (nonatomic) unsigned int qualityIndex;
@property (nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) unsigned short repairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
