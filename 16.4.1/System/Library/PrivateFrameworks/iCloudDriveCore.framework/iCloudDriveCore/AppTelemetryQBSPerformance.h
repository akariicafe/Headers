@class NSString;

@interface AppTelemetryQBSPerformance : PBCodable <NSCopying> {
    struct { unsigned char recordsFetched : 1; unsigned char recordsFetchedTotalMetadataSize : 1; unsigned char totalTime : 1; unsigned char xattrsFetchedTotalSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasOperationType;
@property (retain, nonatomic) NSString *operationType;
@property (nonatomic) BOOL hasTotalTime;
@property (nonatomic) unsigned long long totalTime;
@property (nonatomic) BOOL hasRecordsFetched;
@property (nonatomic) unsigned long long recordsFetched;
@property (nonatomic) BOOL hasRecordsFetchedTotalMetadataSize;
@property (nonatomic) unsigned long long recordsFetchedTotalMetadataSize;
@property (nonatomic) BOOL hasXattrsFetchedTotalSize;
@property (nonatomic) unsigned long long xattrsFetchedTotalSize;

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

@end
