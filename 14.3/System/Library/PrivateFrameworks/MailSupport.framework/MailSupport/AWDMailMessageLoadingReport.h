@class AWDMailMessage;

@interface AWDMailMessageLoadingReport : PBCodable <NSCopying> {
    struct { unsigned char timeLoadingSpinnerIsVisibleInSeconds : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasTimeLoadingSpinnerIsVisibleInSeconds;
@property (nonatomic) long long timeLoadingSpinnerIsVisibleInSeconds;
@property (readonly, nonatomic) BOOL hasMessage;
@property (retain, nonatomic) AWDMailMessage *message;

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
- (id)initWithMailMessage:(id)a0 loadingSpinnerIsVisibleTimeInSeconds:(long long)a1;

@end
