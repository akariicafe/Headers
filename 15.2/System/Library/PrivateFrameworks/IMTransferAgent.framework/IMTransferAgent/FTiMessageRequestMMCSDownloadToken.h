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
