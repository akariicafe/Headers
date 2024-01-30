@class NSString, _NMRMediaRemoteGetIconMessage, NSDate, NSNumber;

@interface NMRMediaRemoteGetIconMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRMediaRemoteGetIconMessage *_protobuf;
}

@property (readonly, nonatomic) NSNumber *width;
@property (readonly, nonatomic) NSNumber *height;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithIconWidth:(double)a0 height:(double)a1 bundleID:(id)a2 originIdentifier:(id)a3;

@end
