@class NSString, NSDictionary, NSDate, NSNumber, _NMRSendCommandMessageProtobuf;

@interface NMRSendCommandMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandMessageProtobuf *_protobuf;
}

@property (readonly, nonatomic) unsigned int command;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithCommand:(unsigned int)a0 bundleID:(id)a1 options:(id)a2 originIdentifier:(id)a3;

@end
