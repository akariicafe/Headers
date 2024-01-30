@class NSString, NSData;

@interface ATXPBHomeScreenWidgetIdentifiable : PBCodable <NSCopying> {
    struct { unsigned char size : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasExtensionBundleId;
@property (retain, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) BOOL hasWidgetKind;
@property (retain, nonatomic) NSString *widgetKind;
@property (readonly, nonatomic) BOOL hasAppBundleId;
@property (retain, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) BOOL hasIntent;
@property (retain, nonatomic) NSData *intent;
@property (readonly, nonatomic) BOOL hasWidgetUniqueId;
@property (retain, nonatomic) NSString *widgetUniqueId;
@property (nonatomic) BOOL hasSize;
@property (nonatomic) int size;

- (id)sizeAsString:(int)a0;
- (int)StringAsSize:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
