@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (id)bagKey;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)command;
- (id)messageBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPGet;
- (BOOL)wantsBagKey;
- (void)handleResponseDictionary:(id)a0;
- (long long)responseCommand;
- (id)requiredKeys;

@end
