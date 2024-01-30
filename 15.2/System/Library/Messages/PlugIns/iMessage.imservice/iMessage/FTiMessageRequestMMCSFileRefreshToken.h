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

- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (long long)command;
- (id)requiredKeys;
- (id)messageBody;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
