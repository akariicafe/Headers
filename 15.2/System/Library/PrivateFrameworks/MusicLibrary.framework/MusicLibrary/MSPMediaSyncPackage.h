@class MSPMediaSyncError, MSPMediaSyncHeader, MSPMediaSyncOperation;

@interface MSPMediaSyncPackage : PBCodable <NSCopying> {
    struct { unsigned char type : 1; unsigned char lastPackage : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasLastPackage;
@property (nonatomic) BOOL lastPackage;
@property (readonly, nonatomic) BOOL hasHeader;
@property (retain, nonatomic) MSPMediaSyncHeader *header;
@property (readonly, nonatomic) BOOL hasSyncOperation;
@property (retain, nonatomic) MSPMediaSyncOperation *syncOperation;
@property (readonly, nonatomic) BOOL hasError;
@property (retain, nonatomic) MSPMediaSyncError *error;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsType:(id)a0;
- (id)typeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
