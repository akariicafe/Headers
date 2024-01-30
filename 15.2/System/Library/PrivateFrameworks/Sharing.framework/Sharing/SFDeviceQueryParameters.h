@class NSString, MAAssetQuery;

@interface SFDeviceQueryParameters : NSObject

@property (readonly, nonatomic) MAAssetQuery *maQuery;
@property (readonly, nonatomic) BOOL installedOnly;
@property (readonly, nonatomic) BOOL imperfectMatch;
@property (readonly, nonatomic) BOOL fallback;
@property (readonly, nonatomic) NSString *queryType;

- (id)maAssetQueryDescription;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDeviceAssetQuery:(id)a0 installedOnly:(BOOL)a1 imperfectMatch:(BOOL)a2 fallback:(BOOL)a3;

@end
