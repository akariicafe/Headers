@class NSString, NSDictionary;

@interface FTGetRegionMetadataMessage : IDSBaseMessage <NSCopying>

@property (copy) NSString *language;
@property (copy) NSDictionary *responseRegionInformation;

- (long long)responseCommand;
- (void)handleResponseDictionary:(id)a0;
- (BOOL)wantsHTTPHeaders;
- (long long)command;
- (id)requiredKeys;
- (id)messageBody;
- (id)bagKey;
- (BOOL)wantsBagKey;
- (BOOL)wantsHTTPGet;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsBinaryPush;

@end
