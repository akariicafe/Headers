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

- (long long)command;
- (long long)responseCommand;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)handleResponseDictionary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)messageBody;
- (id)requiredKeys;

@end
