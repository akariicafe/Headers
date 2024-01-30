@class _INPBTextNoteContent, _INPBImageNoteContent, NSString;

@interface _INPBNoteContent : PBCodable <_INPBNoteContent, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBImageNoteContent *image;
@property (readonly, nonatomic) BOOL hasImage;
@property (retain, nonatomic) _INPBTextNoteContent *text;
@property (readonly, nonatomic) BOOL hasText;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (BOOL)readFrom:(id)a0;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;

@end
