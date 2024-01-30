@class GEOPDCaptionedPhoto, GEOPDMapsIdentifier, GEOLocalizedString, PBDataReader, NSMutableArray, PBUnknownFields;

@interface GEOPDPublisher : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_collectionIds;
    GEOLocalizedString *_name;
    GEOPDCaptionedPhoto *_photo;
    NSMutableArray *_publisherDescriptions;
    GEOPDMapsIdentifier *_publisherId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _errorState;
    unsigned int _numCollections;
    struct { unsigned char has_errorState : 1; unsigned char has_numCollections : 1; unsigned char read_unknownFields : 1; unsigned char read_collectionIds : 1; unsigned char read_name : 1; unsigned char read_photo : 1; unsigned char read_publisherDescriptions : 1; unsigned char read_publisherId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasPublisherId;
@property (retain, nonatomic) GEOPDMapsIdentifier *publisherId;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (retain, nonatomic) GEOPDCaptionedPhoto *photo;
@property (readonly, nonatomic) BOOL hasName;
@property (retain, nonatomic) GEOLocalizedString *name;
@property (retain, nonatomic) NSMutableArray *collectionIds;
@property (nonatomic) BOOL hasNumCollections;
@property (nonatomic) unsigned int numCollections;
@property (retain, nonatomic) NSMutableArray *publisherDescriptions;
@property (nonatomic) BOOL hasErrorState;
@property (nonatomic) int errorState;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)publisherDescriptionType;
+ (Class)collectionIdType;
+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)publisherDescription;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (id)errorStateAsString:(int)a0;
- (int)StringAsErrorState:(id)a0;
- (void)writeTo:(id)a0;
- (void)addPublisherDescription:(id)a0;
- (unsigned long long)publisherDescriptionsCount;
- (void)clearPublisherDescriptions;
- (id)publisherDescriptionAtIndex:(unsigned long long)a0;
- (id)description;
- (unsigned long long)collectionIdsCount;
- (void)addCollectionId:(id)a0;
- (void)clearCollectionIds;
- (id)collectionIdAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;

@end
