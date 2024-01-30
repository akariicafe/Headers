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
- (id)originator;
- (void)setPushFlags:(unsigned int)a0;
- (void)setCancelled:(BOOL)a0;
- (unsigned int)pushFlags;
- (void)setPushType:(unsigned long long)a0;
- (unsigned long long)pushType;
- (void)setChannelID:(id)a0;
- (void)setPriority:(long long)a0;
- (void)setSent:(BOOL)a0;
- (long long)priority;
- (void)setSendInterface:(long long)a0;
- (BOOL)isEager;
- (id)rawTimeoutTime;
- (unsigned long long)_effectiveSendTimeout;
- (void)setTimedOut:(BOOL)a0;
- (void)setTimestamp:(id)a0;
- (id)eagernessTimeoutTime;
- (BOOL)hasTimedOut;
- (id)sentTimestamp;
- (long long)sendInterface;
- (void)setMessageID:(unsigned long long)a0;
- (void)setSentTimestamp:(id)a0;
- (id)timestamp;
- (id)sendTimeoutTime;
- (unsigned long long)messageID;
- (BOOL)wasSent;
- (BOOL)wasCancelled;
- (id)channelID;

@end
