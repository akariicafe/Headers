@class NSString, NSArray;

@interface VCMediaStreamMultiwayConfig : NSObject {
    struct { unsigned char maxNetworkBitrate : 1; unsigned char maxMediaBitrate : 1; unsigned char maxPacketsPerSecond : 1; unsigned char idsStreamID : 1; unsigned char qualityIndex : 1; unsigned char maxIDSStreamIdCount : 1; unsigned char repairedStreamID : 1; unsigned char repairedMaxNetworkBitrate : 1; } _has;
}

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *participantId;
@property (nonatomic) unsigned long long remoteIDSParticipantID;
@property (nonatomic) unsigned int ssrc;
@property (nonatomic) unsigned int maxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasMaxNetworkBitrate;
@property (nonatomic) unsigned int maxMediaBitrate;
@property (readonly, nonatomic) BOOL hasMaxMediaBitrate;
@property (nonatomic) float maxPacketsPerSecond;
@property (readonly, nonatomic) BOOL hasMaxPacketsPerSecond;
@property (nonatomic) unsigned short idsStreamID;
@property (readonly, nonatomic) BOOL hasIdsStreamID;
@property (nonatomic) unsigned int qualityIndex;
@property (readonly, nonatomic) BOOL hasQualityIndex;
@property (nonatomic) unsigned int maxIDSStreamIdCount;
@property (readonly, nonatomic) BOOL hasMaxIDSStreamIdCount;
@property (nonatomic) unsigned short repairedStreamID;
@property (readonly, nonatomic) BOOL hasRepairedStreamID;
@property (nonatomic) unsigned int repairedMaxNetworkBitrate;
@property (readonly, nonatomic) BOOL hasRepairedMaxNetworkBitrate;
@property (nonatomic) BOOL startOnDemand;
@property (readonly, nonatomic) NSArray *streamIds;
@property (nonatomic) BOOL isOneToOne;
@property (nonatomic) BOOL shouldIgnoreRTPHeaderExtensions;
@property (nonatomic) unsigned int streamGroupID;
@property (nonatomic) unsigned int negotiationProtocolMask;

- (void)dealloc;

@end
