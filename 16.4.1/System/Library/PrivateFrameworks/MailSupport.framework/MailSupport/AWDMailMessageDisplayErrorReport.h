@class AWDMailMessage;

@interface AWDMailMessageDisplayErrorReport : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char loadingError : 1; unsigned char mimeError : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasMimeError;
@property (nonatomic) int mimeError;
@property (nonatomic) BOOL hasLoadingError;
@property (nonatomic) int loadingError;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) AWDMailMessage *message;

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
- (int)StringAsLoadingError:(id)a0;
- (int)StringAsMimeError:(id)a0;
- (id)loadingErrorAsString:(int)a0;
- (id)mimeErrorAsString:(int)a0;

@end
