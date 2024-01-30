@class NSString;

@interface CPBaseSceneRequest : NSObject <CPArchivable, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleId;
@property (readonly, copy, nonatomic) NSString *sceneId;
@property (readonly, copy, nonatomic) NSString *bundleVersion;
@property (readonly, copy, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_deserializeFrom:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copy;
- (id)_serialize;
- (id)initWithBundleId:(id)a0 sceneId:(id)a1 isEnabled:(BOOL)a2;
- (id)initWithBundleId:(id)a0 sceneId:(id)a1 isEnabled:(BOOL)a2 bundleVersion:(id)a3 buildversion:(id)a4;
- (BOOL)isEqualRequest:(id)a0;

@end
