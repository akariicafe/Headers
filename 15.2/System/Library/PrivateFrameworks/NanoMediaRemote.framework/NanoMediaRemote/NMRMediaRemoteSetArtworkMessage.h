@class NSString, NSData, NSDate, NSNumber, _NMRMediaRemoteSetArtworkMessage;

@interface NMRMediaRemoteSetArtworkMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetArtworkMessage *_protobuf;
}

@property (readonly, nonatomic) NSData *jpegArtwork;
@property (readonly, nonatomic) NSData *originalDigest;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithJPEGArtwork:(id)a0 originalDigest:(id)a1 originIdentifier:(id)a2;

@end
