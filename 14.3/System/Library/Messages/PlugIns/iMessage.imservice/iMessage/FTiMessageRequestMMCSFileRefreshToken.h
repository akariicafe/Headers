@class NSString, NSData, NSNumber;

@interface FTiMessageRequestMMCSFileRefreshToken : IDSMessage <NSCopying>

@property (copy, nonatomic) NSString *owner;
@property (copy, nonatomic) NSData *signature;
@property (copy, nonatomic) NSNumber *fileLength;
@property (copy, nonatomic) NSString *authURL;
@property (copy, nonatomic) NSNumber *requestContentVersion;
@property (copy, nonatomic) NSString *requestContentHeaders;
@property (copy, nonatomic) NSNumber *responseContentVersion;
@property (copy, nonatomic) NSString *responseContentHeaders;
@property (copy, nonatomic) NSData *responseContentBody;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (void)dealloc;
- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (long long)responseCommand;
- (id)requiredKeys;

@end
