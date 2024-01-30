@class _INPBAppId, _INPBBuildId, NSString;

@interface _INPBAppBuild : PBCodable <_INPBAppBuild, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBAppId *appId;
@property (readonly, nonatomic) BOOL hasAppId;
@property (retain, nonatomic) _INPBBuildId *buildId;
@property (readonly, nonatomic) BOOL hasBuildId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
