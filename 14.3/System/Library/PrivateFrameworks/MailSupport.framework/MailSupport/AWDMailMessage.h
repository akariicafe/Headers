@class NSString, AWDMailMessageBody;

@interface AWDMailMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) AWDMailMessageBody *body;

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
- (id)initWithMailMessage:(id)a0;

@end
