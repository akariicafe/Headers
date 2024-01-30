@class NSString, PBDataReader, PBUnknownFields;

@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_branchLabel;
    NSString *_branchName;
    NSString *_experimentId;
    NSString *_experimentName;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _readerLock;
    struct { unsigned char read_unknownFields : 1; unsigned char read_branchLabel : 1; unsigned char read_branchName : 1; unsigned char read_experimentId : 1; unsigned char read_experimentName : 1; unsigned char wrote_anyField : 1; } _flags;
}

@property (readonly, nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) NSString *experimentId;
@property (readonly, nonatomic) BOOL hasExperimentName;
@property (retain, nonatomic) NSString *experimentName;
@property (readonly, nonatomic) BOOL hasBranchLabel;
@property (retain, nonatomic) NSString *branchLabel;
@property (readonly, nonatomic) BOOL hasBranchName;
@property (retain, nonatomic) NSString *branchName;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)a0;

- (id)initWithJSON:(id)a0;
- (id)init;
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

@end
