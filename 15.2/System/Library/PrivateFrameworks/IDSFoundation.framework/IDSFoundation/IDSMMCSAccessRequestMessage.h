@class NSArray, NSData, NSString;

@interface IDSMMCSAccessRequestMessage : IDSMessage

@property (retain, nonatomic) NSArray *downloadAuths;
@property (retain, nonatomic) NSData *downloadingDeviceToken;
@property (retain, nonatomic) NSData *sessionToken;
@property (retain, nonatomic) NSString *downloadingDeviceID;
@property (retain, nonatomic) NSString *senderID;

- (long long)responseCommand;
- (long long)command;
- (id)requiredKeys;
- (id)messageBody;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
