@class DRSProtoRequestDescription, NSString;

@interface DRSProtoEnableDataGatheringRequest : PBRequest <NSCopying> {
    struct { unsigned char isContinue : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasRequestDescription;
@property (retain, nonatomic) DRSProtoRequestDescription *requestDescription;
@property (readonly, nonatomic) BOOL hasLogType;
@property (retain, nonatomic) NSString *logType;
@property (nonatomic) BOOL hasIsContinue;
@property (nonatomic) BOOL isContinue;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
