@class _NMRMediaRemoteGetStateMessageProfobuf, NSString, NSData, NSDate, NSNumber;

@interface NMRMediaRemoteGetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetStateMessageProfobuf *_protobuf;
}

@property (readonly, nonatomic) NSData *nowPlayingInfoDigest;
@property (readonly, nonatomic) NSData *applicationInfoDigest;
@property (readonly, nonatomic) NSData *supportedCommandsDigest;
@property (readonly, nonatomic) NSData *playbackQueueDigest;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithNowPlayingInfoDigest:(id)a0 applicationInfoDigest:(id)a1 supportedCommandsDigest:(id)a2 playbackQueueDigest:(id)a3 originIdentifier:(id)a4;

@end
