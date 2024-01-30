@class NSString, AWDMailMessageBody;

@interface AWDMailMessage : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasMessageId;
@property (retain, nonatomic) NSString *messageId;
@property (readonly, nonatomic) BOOL hasBody;
@property (retain, nonatomic) AWDMailMessageBody *body;

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
- (id)initWithMailMessage:(id)a0;

@end
