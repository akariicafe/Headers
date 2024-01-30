@class NSString, CKDPShareMetadata, CKDPZone, NSMutableArray, CKDPRecord;

@interface CKDPRecordResolveTokenResponse : PBCodable <NSCopying> {
    struct { unsigned char containerEnvironment : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContainer;
@property (retain, nonatomic) NSString *container;
@property (nonatomic) BOOL hasContainerEnvironment;
@property (nonatomic) int containerEnvironment;
@property (retain, nonatomic) NSMutableArray *records;
@property (readonly, nonatomic) BOOL hasShareRecord;
@property (retain, nonatomic) CKDPRecord *shareRecord;
@property (readonly, nonatomic) BOOL hasShareMetadata;
@property (retain, nonatomic) CKDPShareMetadata *shareMetadata;
@property (readonly, nonatomic) BOOL hasRecordZone;
@property (retain, nonatomic) CKDPZone *recordZone;

+ (Class)recordType;

- (void)addRecord:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)clearRecords;
- (unsigned long long)recordsCount;
- (int)StringAsContainerEnvironment:(id)a0;
- (id)containerEnvironmentAsString:(int)a0;
- (id)recordAtIndex:(unsigned long long)a0;

@end
