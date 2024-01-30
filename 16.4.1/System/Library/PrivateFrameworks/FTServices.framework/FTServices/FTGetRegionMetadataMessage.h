@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (long long)command;
- (long long)responseCommand;
- (id)bagKey;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (id)init;
- (void).cxx_destruct;
- (id)messageBody;
- (id)requiredKeys;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsHTTPHeaders;

@end
