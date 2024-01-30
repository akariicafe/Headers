@class NSString, _NMRMediaRemoteSetStateMessageProfobuf, NSData, NSDate, NSNumber;

@interface NMRMediaRemoteSetStateMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetStateMessageProfobuf *_protobuf;
}

@property (readonly, nonatomic) NSData *nowPlayingInfoData;
@property (readonly, nonatomic) NSData *applicationInfoData;
@property (readonly, nonatomic) NSData *supportedCommandsData;
@property (readonly, nonatomic) NSData *playbackQueueData;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithNowPlayingInfo:(id)a0 applicationInfo:(id)a1 supportedCommands:(id)a2 playbackQueue:(id)a3 originIdentifier:(id)a4;

@end
