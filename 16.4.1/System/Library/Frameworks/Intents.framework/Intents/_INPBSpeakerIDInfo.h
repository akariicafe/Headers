@class NSString, _INPBString;

@interface _INPBSpeakerIDInfo : PBCodable <_INPBSpeakerIDInfo, NSSecureCoding, NSCopying> {
    struct { unsigned char speakerIDConfidence : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *sharedUserID;
@property (readonly, nonatomic) BOOL hasSharedUserID;
@property (nonatomic) int speakerIDConfidence;
@property (nonatomic) BOOL hasSpeakerIDConfidence;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (int)StringAsSpeakerIDConfidence:(id)a0;
- (id)speakerIDConfidenceAsString:(int)a0;

@end
