@class _INPBBuildId, NSArray, NSString, _INPBAppId;

@interface _INPBAppBundleInfo : PBCodable <_INPBAppBundleInfo, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAppId *appId;
@property (readonly, nonatomic) BOOL hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (readonly, nonatomic) BOOL hasBuildId;
@property (copy, nonatomic) NSArray *intentSupports;
@property (readonly, nonatomic) unsigned long long intentSupportsCount;
@property (copy, nonatomic) NSArray *localizedProjects;
@property (readonly, nonatomic) unsigned long long localizedProjectsCount;
@property (copy, nonatomic) NSArray *supportedPlatforms;
@property (readonly, nonatomic) unsigned long long supportedPlatformsCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)intentSupportType;
+ (Class)localizedProjectsType;
+ (Class)supportedPlatformsType;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearIntentSupports;
- (void)addIntentSupport:(id)a0;
- (id)intentSupportAtIndex:(unsigned long long)a0;
- (void)clearLocalizedProjects;
- (void)addLocalizedProjects:(id)a0;
- (id)localizedProjectsAtIndex:(unsigned long long)a0;
- (void)clearSupportedPlatforms;
- (void)addSupportedPlatforms:(id)a0;
- (id)supportedPlatformsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
