@class NSString, _INPBLocation;

@interface _INPBSearchForPhotosIntentResponse : PBCodable <_INPBSearchForPhotosIntentResponse, NSSecureCoding, NSCopying> {
    struct { unsigned char searchResultsCount : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *albumName;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (retain, nonatomic) _INPBLocation *locationCreated;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (nonatomic) int searchResultsCount;
@property (nonatomic) BOOL hasSearchResultsCount;
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
