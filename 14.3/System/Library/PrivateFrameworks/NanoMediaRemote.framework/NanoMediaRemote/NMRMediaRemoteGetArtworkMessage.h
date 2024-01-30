@class _NMRMediaRemoteGetArtworkMessage, NSString, NSDate, NSNumber;

@interface NMRMediaRemoteGetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetArtworkMessage *_protobuf;
}

@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithOriginIdentifier:(id)a0;

@end
