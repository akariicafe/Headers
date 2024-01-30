@class NSString, MRProtocolClientConnection, NSData, PBCodable, NSError, MRProtocolMessageOptions;

@interface MRProtocolMessage : NSObject {
    NSData *_protobufData;
    BOOL _replied;
}

@property (retain, nonatomic) PBCodable *underlyingCodableMessage;
@property (copy, nonatomic) NSString *replyIdentifier;
@property (copy, nonatomic) NSString *uniqueIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSError *error;
@property (weak, nonatomic) MRProtocolClientConnection *clientConnection;
@property (nonatomic) BOOL isIncomingReply;
@property (nonatomic) BOOL isOutgoingReply;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) unsigned long long encryptionType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) BOOL shouldLog;
@property (retain, nonatomic) MRProtocolMessageOptions *transportOptions;

+ (id)protocolMessageWithProtobufData:(id)a0 error:(id *)a1;
+ (unsigned long long)currentProtocolVersion;

- (BOOL)reply;
- (BOOL)replyWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
