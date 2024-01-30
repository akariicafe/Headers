@class NSString;

@interface AWDMailMessageBody : PBCodable <NSCopying> {
    struct { unsigned char totalTextSize : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasMimeType;
@property (retain, nonatomic) NSString *mimeType;
@property (readonly, nonatomic) BOOL hasMimeSubtype;
@property (retain, nonatomic) NSString *mimeSubtype;
@property (nonatomic) BOOL hasTotalTextSize;
@property (nonatomic) unsigned long long totalTextSize;

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
- (id)initWithMIMEBody:(id)a0;

@end
