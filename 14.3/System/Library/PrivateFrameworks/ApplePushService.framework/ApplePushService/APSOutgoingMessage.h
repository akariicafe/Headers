@class NSString, APSOutgoingMessageCheckpointTrace;

@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (copy, nonatomic) NSString *senderTokenName;
@property (retain, nonatomic) APSOutgoingMessageCheckpointTrace *checkpointTrace;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (void)setPriority:(long long)a0;
- (id)timestamp;
- (void)setOriginator:(id)a0;
- (void)setMessageID:(unsigned long long)a0;
- (void).cxx_destruct;
- (long long)priority;
- (void)setCancelled:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEager;
- (BOOL)wasSent;
- (id)originator;
- (id)eagernessTimeoutTime;
- (unsigned long long)_effectiveSendTimeout;
- (id)sendTimeoutTime;
- (id)rawTimeoutTime;
- (long long)sendInterface;
- (void)setSendInterface:(long long)a0;
- (BOOL)hasTimedOut;
- (void)setTimedOut:(BOOL)a0;
- (void)setPushType:(unsigned long long)a0;
- (void)setSentTimestamp:(id)a0;
- (id)sentTimestamp;
- (unsigned int)pushFlags;
- (void)setPushFlags:(unsigned int)a0;
- (unsigned long long)messageID;
- (void)setTimestamp:(id)a0;
- (void)setSent:(BOOL)a0;
- (unsigned long long)pushType;
- (BOOL)wasCancelled;
- (void)encodeWithCoder:(id)a0;

@end
