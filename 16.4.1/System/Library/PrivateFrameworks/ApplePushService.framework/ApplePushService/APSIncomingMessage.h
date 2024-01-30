@class NSData, NSString, NSDate;

@interface APSIncomingMessage : APSMessage

@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSData *token;
@property (copy, nonatomic) NSData *perAppToken;
@property (nonatomic, getter=wasFromStorage) BOOL fromStorage;
@property (nonatomic, getter=wasLastMessageFromStorage) BOOL lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (nonatomic, getter=isTracingEnabled) BOOL tracingEnabled;
@property (copy, nonatomic) NSData *tracingUUID;
@property (nonatomic) unsigned long long pushType;
@property (nonatomic) unsigned int pushFlags;
@property (retain, nonatomic) NSString *channelID;

@end
