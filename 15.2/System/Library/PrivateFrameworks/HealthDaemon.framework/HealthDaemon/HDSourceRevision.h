@class NSString, HDSourceEntity;

@interface HDSourceRevision : NSObject

@property (readonly, nonatomic) HDSourceEntity *sourceEntity;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSString *productType;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } operatingSystemVersion;

- (void).cxx_destruct;
- (id)initWithSource:(id)a0 version:(id)a1 productType:(id)a2 operatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a3;

@end
