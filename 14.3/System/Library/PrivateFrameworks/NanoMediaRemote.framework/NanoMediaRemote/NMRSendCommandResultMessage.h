@class NSArray, NSString, NSDate, NSNumber, _NMRSendCommandResultMessageProtobuf;

@interface NMRSendCommandResultMessage : NSObject <NMRMediaRemoteProtobufCodable> {
    _NMRSendCommandResultMessageProtobuf *_protobuf;
}

@property (readonly, nonatomic) unsigned int errorCode;
@property (readonly, nonatomic) NSArray *handlerReturnStatuses;
@property (readonly, nonatomic) NSNumber *originIdentifier;
@property (readonly, nonatomic) NSDate *serializationDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)messageWithErrorCode:(unsigned int)a0 handlerReturnStatuses:(id)a1 originIdentifier:(id)a2;

@end
