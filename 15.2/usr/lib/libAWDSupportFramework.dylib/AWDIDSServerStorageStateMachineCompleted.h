@class NSString;

@interface AWDIDSServerStorageStateMachineCompleted : PBCodable <NSCopying> {
    struct { unsigned char linkType : 1; unsigned char timeTaken : 1; unsigned char timestamp : 1; unsigned char totalMessages : 1; unsigned char wasPrimary : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasWasPrimary;
@property (nonatomic) BOOL wasPrimary;
@property (readonly, nonatomic) BOOL hasServiceIdentifier;
@property (retain, nonatomic) NSString *serviceIdentifier;
@property (nonatomic) BOOL hasTimeTaken;
@property (nonatomic) unsigned long long timeTaken;
@property (nonatomic) BOOL hasTotalMessages;
@property (nonatomic) unsigned long long totalMessages;
@property (nonatomic) BOOL hasLinkType;
@property (nonatomic) unsigned long long linkType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)dictionaryRepresentation;

@end
