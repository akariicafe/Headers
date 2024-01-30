@class PBUnknownFields, NSString, PBDataReader, GEORPFeedbackDetails, GEORPFeedbackCommonCorrections, GEORPFeedbackCommonContext;

@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_clientSubmissionUuid;
    GEORPFeedbackCommonContext *_commonContext;
    GEORPFeedbackCommonCorrections *_commonCorrections;
    GEORPFeedbackDetails *_details;
    NSString *_parentFeedbackId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    int _type;
    struct { unsigned char has_type : 1; unsigned char read_unknownFields : 1; unsigned char read_clientSubmissionUuid : 1; unsigned char read_commonContext : 1; unsigned char read_commonCorrections : 1; unsigned char read_details : 1; unsigned char read_parentFeedbackId : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasClientSubmissionUuid;
@property (retain, nonatomic) NSString *clientSubmissionUuid;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasDetails;
@property (retain, nonatomic) GEORPFeedbackDetails *details;
@property (readonly, nonatomic) BOOL hasCommonContext;
@property (retain, nonatomic) GEORPFeedbackCommonContext *commonContext;
@property (readonly, nonatomic) BOOL hasCommonCorrections;
@property (retain, nonatomic) GEORPFeedbackCommonCorrections *commonCorrections;
@property (readonly, nonatomic) BOOL hasParentFeedbackId;
@property (retain, nonatomic) NSString *parentFeedbackId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
- (int)StringAsType:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (id)initWithData:(id)a0;
- (id)jsonRepresentation;
- (BOOL)readFrom:(id)a0;
- (void)readAll:(BOOL)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)clearUnknownFields:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (id)typeAsString:(int)a0;

@end
