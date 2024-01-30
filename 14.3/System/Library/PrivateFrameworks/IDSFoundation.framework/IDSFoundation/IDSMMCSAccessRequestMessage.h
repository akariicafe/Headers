@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage

@property (retain, nonatomic) NSArray *downloadAuths;
@property (retain, nonatomic) NSData *downloadingDeviceToken;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *downloadingDeviceID;
@property (retain, nonatomic) NSString *senderID;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (id)messageBody;
- (long long)responseCommand;
- (id)requiredKeys;

@end
