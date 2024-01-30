@class NSString, NSDictionary, NSData;

@interface CKAssetDownloadPreauthorization : NSObject <NSCopying>

@property (retain, nonatomic) NSString *responseUUID;
@property (retain, nonatomic) NSDictionary *contentResponseHeaders;
@property (retain, nonatomic) NSData *contentResponseBody;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithResponseUUID:(id)a0 contentResponseHeaders:(id)a1 contentResponseBody:(id)a2;

@end
