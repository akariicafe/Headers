@class NSString;

@interface _INPBAppNames : PBCodable <_INPBAppNames, NSSecureCoding, NSCopying> {
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *appName;
@property (readonly, nonatomic) BOOL hasAppName;
@property (copy, nonatomic) NSString *axSpokenName;
@property (readonly, nonatomic) BOOL hasAxSpokenName;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (copy, nonatomic) NSString *spotlightName;
@property (readonly, nonatomic) BOOL hasSpotlightName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
