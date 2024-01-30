@class NSString, MRProtocolClientConnection, NSData, PBCodable, NSError, MSVMultiCallback;

@interface MRProtocolMessage : NSObject {
    NSData *_protobufData;
    BOOL _replied;
    MSVMultiCallback *_messageSentCallbacks;
    MSVMultiCallback *_messagePurgedCallbacks;
}

@property (retain, nonatomic) PBCodable *underlyingCodableMessage;
@property (copy, nonatomic) NSString *replyIdentifier;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSError *error;
@property (weak, nonatomic) MRProtocolClientConnection *clientConnection;
@property (nonatomic) BOOL isReply;
@property (readonly, nonatomic) NSData *protobufData;
@property (readonly, nonatomic) unsigned long long encryptionType;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) unsigned long long priority;
@property (readonly, nonatomic) BOOL shouldLog;
@property (readonly, nonatomic) MSVMultiCallback *messageSentCallbacks;
@property (readonly, nonatomic) MSVMultiCallback *messagePurgedCallbacks;

+ (unsigned long long)currentProtocolVersion;
+ (id)protocolMessageWithProtobufData:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)reply;
- (BOOL)replyWithMessage:(id)a0;
- (id)initWithUnderlyingCodableMessage:(id)a0 error:(id)a1;

@end
