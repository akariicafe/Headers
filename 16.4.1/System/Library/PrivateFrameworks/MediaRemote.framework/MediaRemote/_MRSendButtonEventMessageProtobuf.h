@interface _MRSendButtonEventMessageProtobuf : PBCodable <NSCopying> {
    struct { unsigned char usage : 1; unsigned char usagePage : 1; unsigned char buttonDown : 1; } _has;
}

@property (nonatomic) BOOL hasUsagePage;
@property (nonatomic) unsigned int usagePage;
@property (nonatomic) BOOL hasUsage;
@property (nonatomic) unsigned int usage;
@property (nonatomic) BOOL hasButtonDown;
@property (nonatomic) BOOL buttonDown;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
