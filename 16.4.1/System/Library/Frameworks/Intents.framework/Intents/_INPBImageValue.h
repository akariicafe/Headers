@class NSData, NSString, _INPBValueMetadata;

@interface _INPBImageValue : PBCodable <_INPBImageValue, NSSecureCoding, NSCopying> {
    struct { unsigned char height : 1; unsigned char renderingMode : 1; unsigned char type : 1; unsigned char width : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (readonly, nonatomic) BOOL hasData;
@property (nonatomic) double height;
@property (nonatomic) BOOL hasHeight;
@property (copy, nonatomic) NSString *proxyServiceIdentifier;
@property (readonly, nonatomic) BOOL hasProxyServiceIdentifier;
@property (nonatomic) int renderingMode;
@property (nonatomic) BOOL hasRenderingMode;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *uri;
@property (readonly, nonatomic) BOOL hasUri;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (nonatomic) double width;
@property (nonatomic) BOOL hasWidth;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)renderingModeAsString:(int)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)StringAsRenderingMode:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsType:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (id)typeAsString:(int)a0;

@end
