@class NSString, _INPBIntentMetadata;

@interface _INPBPlayAnnouncementSoundIntent : PBCodable <_INPBPlayAnnouncementSoundIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char soundType : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) int soundType;
@property (nonatomic) BOOL hasSoundType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)readFrom:(id)a0;
- (id)soundTypeAsString:(int)a0;
- (int)StringAsSoundType:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;

@end
