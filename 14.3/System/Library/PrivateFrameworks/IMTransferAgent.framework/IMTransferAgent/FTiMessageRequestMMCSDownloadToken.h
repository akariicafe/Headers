@class NSString, NSData;

@interface FTiMessageRequestMMCSDownloadToken : IDSMessage <NSCopying>

@property (copy) NSString *owner;
@property (copy) NSData *signature;
@property (copy) NSString *responseAuthToken;
@property (copy) NSString *responseRequestorID;
@property long long contentVersion;
@property (copy) NSString *contentHeaders;
@property (copy) NSString *authURLString;
@property (copy) NSData *responseContentBody;
@property long long responseContentVersion;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (void)dealloc;
- (id)messageBody;
- (void)handleResponseDictionary:(id)a0;
- (long long)responseCommand;
- (id)requiredKeys;

@end
