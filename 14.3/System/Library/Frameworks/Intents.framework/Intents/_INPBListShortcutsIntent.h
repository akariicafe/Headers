@class NSArray, NSString, _INPBIntentMetadata;

@interface _INPBListShortcutsIntent : PBCodable <_INPBListShortcutsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char originDevice : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *appTitles;
@property (readonly, nonatomic) unsigned long long appTitlesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int originDevice;
@property (nonatomic) BOOL hasOriginDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)appTitleType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (void)clearAppTitles;
- (void)addAppTitle:(id)a0;
- (id)appTitleAtIndex:(unsigned long long)a0;
- (id)originDeviceAsString:(int)a0;
- (int)StringAsOriginDevice:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
