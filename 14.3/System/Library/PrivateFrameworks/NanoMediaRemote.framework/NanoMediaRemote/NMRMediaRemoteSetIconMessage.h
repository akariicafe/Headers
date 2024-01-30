@class NSString, NSData, NSDate, NSNumber, _NMRMediaRemoteSetIconMessage;

@interface NMRMediaRemoteSetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteSetIconMessage *_protobuf;
}

@property (readonly, nonatomic) NSData *icon;
@property (readonly, nonatomic) NSData *originalDigest;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithIcon:(id)a0 originalDigest:(id)a1 bundleID:(id)a2 originIdentifier:(id)a3;

@end
