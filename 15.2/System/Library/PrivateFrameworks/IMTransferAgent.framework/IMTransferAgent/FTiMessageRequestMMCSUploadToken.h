@class NSData, NSNumber, NSString;

@interface FTiMessageRequestMMCSUploadToken : IDSMessage <NSCopying>

@property (copy) NSData *signature;
@property (copy) NSNumber *length;
@property (copy) NSString *responseAuthToken;
@property (copy) NSString *responseRequestURL;
@property (copy) NSString *responseRequestorID;
@property long long contentVersion;
@property (copy) NSString *contentHeaders;
@property (copy) NSData *contentBody;
@property (copy) NSString *responseContentHeaders;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;
@property (copy, nonatomic) NSData *pushToken;
@property (copy, nonatomic) NSData *sessionToken;
@property (copy, nonatomic) NSString *senderID;
@property (copy, nonatomic) NSString *destinationID;
@property (copy, nonatomic) NSString *anonymousSenderID;

- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (long long)command;
- (id)requiredKeys;
- (id)messageBody;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
