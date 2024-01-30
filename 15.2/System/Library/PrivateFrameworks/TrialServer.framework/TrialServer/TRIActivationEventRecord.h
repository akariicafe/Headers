@class NSString;

@interface TRIActivationEventRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *parentId;
@property (readonly, nonatomic) NSString *factorPackSetId;
@property (readonly, nonatomic) int deploymentId;
@property (readonly, nonatomic) NSString *osBuild;
@property (readonly, nonatomic) NSString *languageCode;
@property (readonly, nonatomic) NSString *regionCode;

+ (id)recordWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5;

- (BOOL)isEqualToRecord:(id)a0;
- (id)copyWithReplacementOsBuild:(id)a0;
- (id)initWithParentId:(id)a0 factorPackSetId:(id)a1 deploymentId:(int)a2 osBuild:(id)a3 languageCode:(id)a4 regionCode:(id)a5;
- (id)copyWithReplacementParentId:(id)a0;
- (id)description;
- (id)copyWithReplacementLanguageCode:(id)a0;
- (id)copyWithReplacementDeploymentId:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithReplacementFactorPackSetId:(id)a0;
- (id)copyWithReplacementRegionCode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
