@class _INPBLocation, _INPBDateTimeRange, NSString, _INPBStringList, _INPBString, _INPBIntentMetadata, _INPBContactList;

@interface _INPBStartPhotoPlaybackIntent : PBCodable <_INPBStartPhotoPlaybackIntent, NSSecureCoding, NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _excludedAttributes;
    struct { int *list; unsigned long long count; unsigned long long size; } _includedAttributes;
    struct { } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) _INPBString *albumName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (retain, nonatomic) _INPBContactList *contentPerson;
@property (readonly, nonatomic) BOOL hasContentPerson;
@property (retain, nonatomic) _INPBDateTimeRange *dateCreated;
@property (readonly, nonatomic) BOOL hasDateCreated;
@property (readonly, nonatomic) int *excludedAttributes;
@property (readonly, nonatomic) unsigned long long excludedAttributesCount;
@property (readonly, nonatomic) int *includedAttributes;
@property (readonly, nonatomic) unsigned long long includedAttributesCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (retain, nonatomic) _INPBStringList *keywordString;
@property (readonly, nonatomic) BOOL hasKeywordString;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (retain, nonatomic) _INPBContactList *peopleInPhoto;
@property (readonly, nonatomic) BOOL hasPeopleInPhoto;
@property (retain, nonatomic) _INPBStringList *searchTerm;
@property (readonly, nonatomic) BOOL hasSearchTerm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearExcludedAttributes;
- (void)addExcludedAttribute:(int)a0;
- (int)excludedAttributeAtIndex:(unsigned long long)a0;
- (void)setExcludedAttributes:(int *)a0 count:(unsigned long long)a1;
- (id)excludedAttributesAsString:(int)a0;
- (int)StringAsExcludedAttributes:(id)a0;
- (void)clearIncludedAttributes;
- (void)addIncludedAttribute:(int)a0;
- (int)includedAttributeAtIndex:(unsigned long long)a0;
- (void)setIncludedAttributes:(int *)a0 count:(unsigned long long)a1;
- (id)includedAttributesAsString:(int)a0;
- (int)StringAsIncludedAttributes:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
