@class NSString;

@interface NPKProtoPresentStandaloneTransactionRequest : PBRequest <NSCopying> {
    struct { unsigned char validUntilEpochTimeInterval : 1; unsigned char transactionType : 1; } _has;
}

@property (nonatomic) BOOL hasTransactionType;
@property (nonatomic) unsigned int transactionType;
@property (readonly, nonatomic) BOOL hasWatchPassUniqueID;
@property (retain, nonatomic) NSString *watchPassUniqueID;
@property (nonatomic) BOOL hasValidUntilEpochTimeInterval;
@property (nonatomic) double validUntilEpochTimeInterval;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
