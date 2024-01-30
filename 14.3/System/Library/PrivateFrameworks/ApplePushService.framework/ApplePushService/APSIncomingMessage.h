@class NSData, APSIncomingMessageCheckpointTrace, NSDate;

@interface APSIncomingMessage : APSMessage

@property (copy, nonatomic) NSDate *timestamp;
@property (copy, nonatomic) NSData *token;
@property (nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property (nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (retain, nonatomic) APSIncomingMessageCheckpointTrace *checkpointTrace;
@property (nonatomic, getter=isTracingEnabled) BOOL tracingEnabled;
@property (copy, nonatomic) NSData *tracingUUID;
@property (nonatomic) unsigned long long pushType;
@property (nonatomic) unsigned int pushFlags;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
