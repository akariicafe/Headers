@class NSString, NSDictionary, NSData;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *responseUUID;
@property (readonly, copy, nonatomic) NSDictionary *contentResponseHeaders;
@property (readonly, copy, nonatomic) NSData *contentResponseBody;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResponseUUID:(id)a0 contentResponseHeaders:(id)a1 contentResponseBody:(id)a2;

@end
