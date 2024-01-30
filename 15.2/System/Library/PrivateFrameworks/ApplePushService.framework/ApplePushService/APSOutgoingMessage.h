@class NSString;

@interface APSOutgoingMessage : APSMessage

@property (nonatomic) unsigned long long timeout;
@property (nonatomic, getter=isCritical) BOOL critical;
@property (nonatomic) unsigned long long payloadFormat;
@property (nonatomic) unsigned long long payloadLength;
@property (copy, nonatomic) NSString *senderTokenName;
@property (nonatomic) BOOL sendRetried;
@property (nonatomic) BOOL ackReceived;
@property (nonatomic) unsigned long long ackTimestamp;

- (void)setOriginator:(id)a0;
- (unsigned int)pushFlags;
- (void)setTimestamp:(id)a0;
- (void)setPushType:(unsigned long long)a0;
- (unsigned long long)_effectiveSendTimeout;
- (BOOL)wasSent;
- (id)eagernessTimeoutTime;
- (BOOL)wasCancelled;
- (unsigned long long)pushType;
- (void)setCancelled:(BOOL)a0;
- (void)setPriority:(long long)a0;
- (long long)sendInterface;
- (id)originator;
- (void)setChannelID:(id)a0;
- (id)sentTimestamp;
- (void)setMessageID:(unsigned long long)a0;
- (id)timestamp;
- (void)setPushFlags:(unsigned int)a0;
- (long long)priority;
- (id)sendTimeoutTime;
- (void)setSendInterface:(long long)a0;
- (unsigned long long)messageID;
- (id)rawTimeoutTime;
- (void)setSent:(BOOL)a0;
- (id)channelID;
- (BOOL)hasTimedOut;
- (void)setTimedOut:(BOOL)a0;
- (BOOL)isEager;
- (void)setSentTimestamp:(id)a0;

@end
